#include "snakes.cpp"

namespace Snakes {
  class CoralSnake : public Snake {
    public:
      CoralSnake(const int n);
      std::string getName();
  };

  std::string CoralSnake::getName() {
    return "coral";
  }

  CoralSnake::CoralSnake(const int n) {
      i = n;
  };

}

