#pragma once

#include "CoreEngine.h"

class Game {

public:
	Game();
	void launch();
	void init();
	CoreEngine getEngine();

private:
	CoreEngine engine;
};