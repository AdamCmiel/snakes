#include "./snakes/coralSnake.hpp"
#include "./snakes/den.hpp"
#include "./snakes/den.cpp"

//must include den.cpp because of template portability

using namespace Snakes;

std::string danceParty() {
    return "rage!";
}

int main() {
    int i = 45;
    Den<CoralSnake> den (i);
    sFunc callback = &danceParty;
    den.setDanceMove(callback);
    den.writhe();
    den.is_writhing();
}

