#include <functional>
#include "coralSnakes.cpp"

using namespace Snakes;

std::string danceParty() {
    return "rage!";
}

int main() {
    int i = 45;
    //Den<CoralSnake> den (i);
    Den<Snake> den (i);
    std::function<std::string()> callback = &danceParty;
    den.setDanceMove(callback);
    den.writhe();
    den.is_writhing();
}

