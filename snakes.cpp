#include <iostream>
#include <list>
#include "animal.cpp"

namespace Snakes {
  class Snake : public Animal::Base {
    public:
      int i;
      Snake(const int n = 0);
      void writhe();
      std::string getName();
  };

  Snake::Snake(const int n) {
      i = n;
  }
  
  std::string Snake::getName() {
    return "snake";
  }

  void Snake::writhe() {
      std::cout << getName() << i << std::endl;
  }

  template<typename S>
  class Den {
      std::string type;
      int i;
      bool writhing;
      std::list<S> snakes;
    public:
      Den(const int n) {
        writhing = false;
        i = n;
        for (int j = 0; j < n; j++) {
            S s (j);
            snakes.push_back(s);
        }
      }
      void writhe();
      void is_writhing();
  };

  template<typename S>
  void Den<S>::writhe() {
      writhing = true;
      for (auto snake : snakes) {
        snake.writhe();
      } 
  }

  template<typename S>
  void Den<S>::is_writhing() {
      std::cout << "writhing: " << std::boolalpha << writhing << std::endl;
  }
};

