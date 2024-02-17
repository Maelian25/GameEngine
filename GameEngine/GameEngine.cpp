#include "GameEngine.h"

namespace GameEngine {
    Game::Game(int width, int height) : screenWidth(width), screenHeight(height), window(sf::VideoMode(width, height), "Simple Game Engine") {}

    void Game::run() {
        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            if (moves.hitWall()) {
                // Réaction à la collision avec un mur
            }

            int movementResult = moves.move();
            // Utilisation du résultat du mouvement

            window.clear(sf::Color::Black);
            // Dessiner les objets du jeu

            window.display();
        }
    }

} // namespace GameEngine
