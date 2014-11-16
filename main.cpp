#include <SFML/Graphics.hpp>

#include "Space.hpp"
#include "SpaceViewer.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1024, 768), "Karellan");

    Space* space = new Space(16, 16, 1);
    SpaceViewer* spaceViewer = new SpaceViewer(space);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        window.draw(*spaceViewer);
        window.display();
    }

    delete space;
    delete spaceViewer;

    return 0;
}
