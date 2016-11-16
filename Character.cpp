#include "Character.hpp"

Character::Character() :
	//position(sf::Vector2f(WindowHeight - height, WindowWidth / 2)),
	position(0, 0),
	dx(0),
	dy(0),
	speed(5),
	width(29),
	height(29)
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

void Character::setPosition(float newx, float newy) {
	position = sf::Vector2f(newx, newy);
}

sf::Vector2f Character::getPosition() {
	return position;
}

void Birth() {

}

void Death() {

}

float Character::GetSpeed() {
	return speed;
}

Character::~Character()
{
}
