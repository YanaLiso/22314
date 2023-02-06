#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
#include "Ball.h"
const float WINDOW_WIDTH{ 800.f };
const float WINDOW_HEIGHT{ 600.f };
const std::string WINDOW_TITLE{ "SFML Lesson3" };
const unsigned int FPS{ 60 };
const float BALL_RADIUS = 25.f;
const sf::Color BALL_COLOR{ 250, 208, 0 };
const sf::Vector2f BALL_START_POS{ (WINDOW_WIDTH - 2 * BALL_RADIUS) / 2,
		(WINDOW_HEIGHT - 2 * BALL_RADIUS) / 2 };
