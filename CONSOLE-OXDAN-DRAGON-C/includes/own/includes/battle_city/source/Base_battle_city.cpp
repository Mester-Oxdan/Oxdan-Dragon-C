#include "Base_battle_city.h"
#include "../../../all_diclarations.h"

Base::Base()
    : life(true) {
    mTexture.loadFromFile(oxdan_dragon_c + "/includes/own/includes/battle_city/media/baseSprite.png");
    mSprite.setTexture(mTexture);
    mSprite.setTextureRect(sf::IntRect(0, 0, 48, 48));
    mSprite.setPosition(336, 600);
}
