#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "header.hpp"

class Character
{
public:
	Character();
	void Accel(const char* xory, float speed);
	void Update();
	void setPosition(float newx, float newy);
	sf::Vector2f getPosition();
	void Birth();
	void Death();
	float GetSpeed();

	~Character();
private:
	sf::Vector2f position;
	float dx, dy;
	float speed;
	float width;
	float height;
};