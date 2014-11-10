#include "snakes/snakes.hpp"

//must include den.cpp because of template portability
#include "./snakes/den.cpp"

using namespace Snakes;

int main() {
    int i = 45;
    Den<CoralSnake> den (i);
    den.setDanceMove([]() -> std::string {
        return "rage";
    });
    den.writhe();
    den.is_writhing();
}

