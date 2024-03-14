#pragma once
#include <SFML/Graphics.hpp>
#include <thread>
#include <chrono>
#include <Windows.h>
#include "pchannel.h"
#include "Windows.h"
#include "WtsApi32.h"
#include <iostream>

using namespace std;
class vr
{
private:
	sf::RectangleShape shape;
	sf::RenderWindow window;
	void processEvent();
	void render();
	void update();
	void static incrementer();
	void check();
	//bool ....()
	/*WTS_PROCESS_INFO* pWPIs = NULL;
	DWORD dwProcCount = 0;*/
	std::thread th;
	const sf::Time TimePerFrame = sf::seconds(1.f / 10.f);
public:
	vr();
	~vr();
	void run();
};

