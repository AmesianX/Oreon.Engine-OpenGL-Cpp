#pragma once

#include "CoreEngine.h"

class Game {

public:
	Game(int width, int height, const char* title);
	void launch();
	void init();


private:
	CoreEngine engine;
	CoreEngine getEngine();
};