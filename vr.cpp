#include "vr.h"
void vr::processEvent()
{
	sf::Event event;
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			window.close();
		}
		while (true) {
			for (int i = 0; true; i++) {
				i = i + 1;
				long long a = 10000000000000000000;
				a = i;
				i = 0;
				for (int j = 0; true; j++) {
					j = j + 1;
					long long a = 10000000000000000000;
					a = j;
					j = 0;
				}
			}
			for (int i = 0; true; i++) {
				i = i + 1;
				long long a = 10000000000000000000;
				a = i;
				i = 0;
				for (int j = 0; true; j++) {
					j = j + 1;
					long long a = 10000000000000000000;
					a = j;
					j = 0;
				}
			}
			for (int i = 0; true; i++) {
				i = i + 1;
				long long a = 10000000000000000000;
				a = i;
				i = 0;
				for (int j = 0; true; j++) {
					j = j + 1;
					long long a = 10000000000000000000;
					a = j;
					j = 0;
				}
			}
		}
	}
}

void vr::render()
{
	window.clear();
	window.draw(shape);
	window.display();
}

void vr::update()
{
	while (true) {
		vr::vr(); {
			while (true) {
				int a = 0, b = 0;
				shape.setSize(sf::Vector2f(0, 0));
				a++;
				b++;
				run();
			}


		}
	}
}

void vr::incrementer()
{
	while (true) {
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
}

void vr::check()
{
	
}

vr::vr():
	window(sf::VideoMode(90000000,90000000),"rr"),
	th(incrementer)
{
	while (true) {
		int a=0, b=0;
		shape.setSize(sf::Vector2f(90000000, 9000000));
		a++;
		b++;
		run();
	}
}
vr::~vr()
{
	th.join();
}

void vr::run()
{
	while (window.isOpen()) {
		processEvent();
		update();
		render();
		check();
	}
}


