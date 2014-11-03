#include "snakes.cpp"

namespace Snakes {
  class CoralSnake : public Snake {
      static std::string name;
    public:
      CoralSnake(const int i) : Snake(i) {};
      std::string getName() override;
  };

  std::string CoralSnake::name = "coral";

  std::string CoralSnake::getName() {
    return CoralSnake::name;
  }
}

