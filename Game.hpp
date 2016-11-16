#pragma once
#include <SFML/Graphics.hpp>
#include <Windows.h>
#include <iostream>
#include <sstream>
#include <string>
#include "Character.hpp"

class Game
{
public:
	Game();
	void run();
	void keyCheck();
	~Game();
private:
	sf::ContextSettings settings;
	sf::RenderWindow window;
	sf::Font font;

	sf::RectangleShape rectSky;

	sf::Sprite spritePlayerWalk1;
	sf::Sprite spritePlayerWalk2;
	sf::Sprite spritePlayerWalk3;
	sf::Sprite spritePlayerJump;

	sf::Clock upsClock;
	sf::Time accumulator;
	sf::Time ups;

	sf::Texture texturePlayer;

	Character player;
};

