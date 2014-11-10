#pragma once
#include <iostream>
#include "../animal.hpp"
#include "types.hpp"

namespace Snakes {
  class Snake : public Animal::Base {
      static std::string name;
    public:
      sFunc danceMove;
      int i;
      Snake(const int ii): i(ii) {};
      void writhe();
      virtual std::string getName() override;
      virtual std::string dance();
      virtual void setDanceMove(sFunc cb);
  };
}

