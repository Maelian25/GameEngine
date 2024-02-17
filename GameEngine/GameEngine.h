#pragma once
#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include <SFML/Graphics.hpp>
#include "Physics.h" // Include the Phyics header

namespace GameEngine {

    class Game {
    public:
        Game(int width, int height);

        void run();

    private:
        sf::RenderWindow window;
        Physics::Moves moves; // Instance de la classe Moves
        int screenWidth;
        int screenHeight;
    };

} // namespace GameEngine

#endif // GAME_ENGINE_H
#pragma once
