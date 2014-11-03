#include <iostream>
#include "../animal.cpp"
#include "types.cpp"

namespace Snakes {
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
};

