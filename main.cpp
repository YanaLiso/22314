#include <SFML/Graphics.hpp>
#include "Ball.h"
#include "settings.h"
using namespace sf;
int main()
{
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SFML works!");
	window.setFramerateLimit(FPS);
	/*CircleShape shape(100.f);
	shape.setFillColor(Color::Green);
	shape.move(800 / 2 - 200 / 2, 600 / 2 - 200 / 2);
	float dx = 1.f;*/
	Ball ball;
	ballInit(ball);
	while (window.isOpen())
	{
		ball.shape.move(ball.speedX, ball.speedY);
		//м€ч отскакивает от левой границы экрана
		if (ball.shape.getPosition().x <= 0)
		{
			ball.speedX = -ball.speedX;
		}
		//м€ч отскакивает от правой границы экрана
		if (ball.shape.getPosition().x + 2 * BALL_RADIUS >= WINDOW_WIDTH)
		{
			ball.speedX = -ball.speedX;
		}

		if (ball.shape.getPosition().y <= 0 ||
			ball.shape.getPosition().y + 2 * BALL_RADIUS >= WINDOW_HEIGHT)
		{
			ball.speedY = -ball.speedY;
		}
		// 1. обработка событий
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		//обновление игровых объектов (функции update)
		/*shape.move(dx, 0);
		if (shape.getPosition().x + 200 >= 800 || shape.getPosition().x <= 0) {
			dx = -dx;
		}*/
		// отрисовка объектов и обновление окна
		window.clear();
		window.draw(ball.shape);
		//window.draw(shape);
		window.display();
	}

	return 0;
}