#include "coralSnakes.cpp"

using namespace Snakes;

int main() {
    int i = 45;
    Den<CoralSnake> den (i);
    den.writhe();
    den.is_writhing();
}

