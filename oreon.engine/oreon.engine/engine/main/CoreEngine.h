#pragma once

#include <engine\core\Window.h>
#include <thread>

class CoreEngine {

public:
	CoreEngine();
	void createWindow(int width,int height, char* title);
	void init();
	void start();

private:
	void run();
	void stop();
	void render();
	void update();
	void cleanUp();
	static int fps;
	float frametime;
	bool isRunning;
	static int getFps();
};