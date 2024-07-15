#include "Base_battle_city.h"

Base::Base()
    : life(true) {
    mTexture.loadFromFile("includes/battle_city/media/baseSprite.png");
    mSprite.setTexture(mTexture);
    mSprite.setTextureRect(sf::IntRect(0, 0, 48, 48));
    mSprite.setPosition(336, 600);
}
