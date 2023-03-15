#pragma once
#include "settings.h"
#include <SFML/Graphics.hpp>
class Player {
private:
	sf::Sprite sprite;
	sf::Texture texture;
public:
	Player() {
		texture.loadFromFile("playerShip.png");
		sprite.setTexture(texture);
		sprite.setPosition(START_POS);
	}
	void update() {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			sprite.move(-SPEED_X, 0.f);
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			sprite.move(SPEED_X, 0.f);
		}
	}
	sf::Sprite getSprite() { return sprite; }
	
};