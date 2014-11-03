#include <iostream>
#include <functional>
#include <vector>
#include "../animal.cpp"

namespace Snakes {
  typedef std::function<std::string()> sFunc;
  class Snake : public Animal::Base {
      static std::string name;
    public:
      sFunc danceMove;
      int i;
      Snake(const int ii): i(ii) {};
      void writhe();
      std::string getName() override;
      virtual std::string dance();
      virtual void setDanceMove(sFunc cb);
  };

  std::string Snake::name = "snake";

  std::string Snake::getName() {
    return Snake::name;
  }

  std::string Snake::dance() {
    return (danceMove) ? danceMove() : "no callback";
  }

  void Snake::setDanceMove(sFunc cb) {
    danceMove = cb;
  }

  void Snake::writhe() {
      std::cout << getName() << " " << dance() << " " << i << std::endl;
  }

  template<typename S>
  class Den {
      std::string type;
      int i;
      bool writhing;
      std::vector<S*> snakes;
    public:
      Den(const int n) {
        writhing = false;
        i = n;
        for (int j = 0; j < n; j++) {
            S * s = new S(j);
            snakes.push_back(s);
        }
      }
      virtual ~Den() {
        for (auto snake : snakes) {
            delete snake;
        }
      }
      void writhe();
      void is_writhing();
      void setDanceMove(sFunc cb);
  };

  template<typename S>
  void Den<S>::writhe() {
      writhing = true;
      for (auto snake : snakes) {
        snake->writhe();
      } 
  }

  template<typename S>
  void Den<S>::setDanceMove(sFunc cb) {
      for (auto snake : snakes) {
        snake->setDanceMove(cb);
      }
  }

  template<typename S>
  void Den<S>::is_writhing() {
      std::cout << "writhing: " << std::boolalpha << writhing << std::endl;
  }
};

