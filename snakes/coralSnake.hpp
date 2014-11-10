#pragma once
#include "snake.hpp"

namespace Snakes {
  class CoralSnake : public Snake {
      static std::string name;
    public:
      CoralSnake(const int i) : Snake(i) {};
      std::string getName() override;
  };
}

