#pragma once
#include <iostream>
#include <vector>
#include "../animal.hpp"
#include "./types.hpp"

namespace Snakes {
  template<typename S>
  class Den {
      std::string type;
      int i;
      bool writhing;
      std::vector<S*> snakes;
    public:
      Den(const int n);
      virtual ~Den();
      void writhe();
      void is_writhing();
      void setDanceMove(sFunc cb);
  };
};

