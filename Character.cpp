#include "Character.hpp"

Character::Character() :
	width(29),
	height(29),
	position(sf::Vector2f(WindowHeight - height, WindowWidth / 2)),
	dx(0),
	dy(0),
	speed(5)
{
}

void Character::Accel(const char* xory, float speed) {
	if (xory == "x") {
		dx += speed;
	}
	else if (xory == "y") {
		dy += speed;
	}
}

void Character::Update() {
	position.x += dx;
	position.y += dy;
}

float Character::GetSpeed() {
	return speed;
}

Character::~Character()
{
}
