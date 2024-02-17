#include "GameEngine.h"

int main() {
    int userWidth = 1024;
    int userHeight = 768;


    GameEngine::Game game(userWidth, userHeight);
    game.run();

    return 0;
}
