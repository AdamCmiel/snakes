#include "den.hpp"

namespace Snakes {
  template<typename S>
  Den<S>::Den(const int n) {
     writhing = false;
     i = n;
     for (int j = 0; j < n; j++) {
         S * s = new S(j);
         snakes.push_back(s);
     }
  }

  template<typename S>
  Den<S>::~Den() {
    for (auto snake : snakes) delete snake;
  }

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

