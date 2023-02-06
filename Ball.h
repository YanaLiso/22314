#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
struct Ball
{
	sf::CircleShape shape;
	float speedX;
	float speedY;

};
void ballInit(Ball& ball) {
	ball.shape.setRadius(BALL_RADIUS);
	ball.shape.setFillColor(BALL_COLOR);
	ball.shape.setPosition(BALL_START_POS);
	ball.speedX = 2.f;
	ball.speedY = 3.f;
}