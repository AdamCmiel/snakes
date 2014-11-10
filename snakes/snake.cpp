#include <iostream>
#include "./snake.hpp"
#include "./types.hpp"

namespace Snakes {
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

