#ifndef __SPACE_VIEWER_H
#define __SPACE_VIEWER_H

#include "Space.hpp"

#include <SFML/Graphics.hpp>

class SpaceViewer: public sf::Drawable {
    Space* space;

    sf::Texture texture;
    sf::Uint8* pixels;
    sf::Sprite sprite;

    public:
        SpaceViewer(Space* space);
        ~SpaceViewer();
    private:
         void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif
