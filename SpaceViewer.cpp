#include "SpaceViewer.hpp"

#include "Space.hpp"

#include <SFML/Graphics.hpp>
#include <stdlib.h>

SpaceViewer::SpaceViewer(Space* space)
{
    this->space = space;

    // The following needs to go into its own class
    if (!texture.create(64, 32)) {
        exit(EXIT_FAILURE);
    }

    // I couldn't figure out how to get an sf::Color into an array of ints.
    pixels = new sf::Uint8[64 * 32 * 4];
    for (int i = 0; i < 64 * 32 * 4; i += 4) {
        pixels[i] = 0xff;
        pixels[i + 1] = 0xff;
        pixels[i + 2] = 0x0;
        pixels[i + 3] = 0xff;
    }
    texture.update(pixels);

    sprite.setTexture(texture);

    sprite.setPosition(sf::Vector2f(32, 32));
}

void SpaceViewer::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(sprite, states);
}

SpaceViewer::~SpaceViewer()
{
    delete pixels;
}
