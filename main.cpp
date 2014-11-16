#include <iostream>
#include <stdlib.h>
#include <SFML/Graphics.hpp>

/* Copied right out of the SFML tutorial. */

int main()
{
    sf::RenderWindow window(sf::VideoMode(1024, 768), "Karellan");

    sf::Texture texture;
    if (!texture.create(64, 32)) {
        return -1;
    }

    // I couldn't figure out how to get an sf::Color into an array of ints.
    sf::Uint8* pixels = new sf::Uint8[64 * 32 * 4];
    for (int i = 0; i < 64 * 32 * 4; i += 4) {
        pixels[i] = 0xff;
        pixels[i + 1] = 0xff;
        pixels[i + 2] = 0x0;
        pixels[i + 3] = 0xff;
    }
    texture.update(pixels);

    sf::Sprite sprite;
    sprite.setTexture(texture);

    sprite.setPosition(sf::Vector2f(32, 32));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        window.draw(sprite);
        window.display();
    }

    delete pixels;

    return 0;
}
