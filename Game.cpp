#include "Game.hpp"
#include <math.h>


Game::Game() :
	settings(),
	window(sf::VideoMode(WindowWidth, WindowHeight), "Grad Project", sf::Style::Close, settings),
	font(),
	rectSky(sf::Vector2f(WindowWidth, GL)),
	spritePlayerWalk1(texturePlayer, sf::IntRect(0, 0, 29, 29)),
	spritePlayerWalk2(),
	spritePlayerWalk3(),
	spritePlayerJump(),

	upsClock(),
	accumulator(sf::Time::Zero),
	ups(sf::seconds(1.f / 60.f))
{
	settings.antialiasingLevel = 4;
	window.setVerticalSyncEnabled(true);
	rectSky.setFillColor(sf::Color(120, 170, 255));

	if (!font.loadFromFile("pixelmix_bold.ttf")) {
		// error
	}
	if (!texturePlayer.loadFromFile("sprites/charsprite.png")) {
		// error
	}
}

void Game::run() {
	srand(time(NULL));

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}


		while (accumulator > ups) {
			accumulator -= ups;

			keyCheck();
			
			player.Update();
			player.setPosition(50, 50);
			spritePlayerWalk1.setPosition(sf::Vector2f(50, 50));

			window.clear();
			//draw stuff
			window.draw(rectSky);
			window.draw(spritePlayerWalk1);
			window.display();

			accumulator += upsClock.restart();
		}
		

	}
}

void Game::keyCheck() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		player.Accel("x", player.GetSpeed() * -1);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		player.Accel("x", player.GetSpeed());
	}
}

Game::~Game()
{
}
