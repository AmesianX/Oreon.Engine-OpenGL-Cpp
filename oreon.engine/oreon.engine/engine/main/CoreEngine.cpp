#include "CoreEngine.h"

using namespace std::chrono_literals;

int CoreEngine::fps;

CoreEngine::CoreEngine() {

}

void CoreEngine::createWindow(int width, int height, char* title) {
	Window::getInstance().create(width,height,title);
}

void CoreEngine::init() {

}

void CoreEngine::start() {
	if (isRunning)
		return;

	run();
}

void CoreEngine::run() {
	isRunning = true;

	int frames = 0;
	long frameCounter = 0;

	auto lastTime = std::chrono::high_resolution_clock::now();
	double unprocessedTime = 0;

	// Rendering Loop
	while (isRunning)
	{

		auto startTime = std::chrono::high_resolution_clock::now();
		long passedTime = (startTime - lastTime).count();
		lastTime = startTime;

		unprocessedTime += passedTime / (double)1000000000;
		frameCounter += passedTime;


		while (unprocessedTime > frametime)
		{
			unprocessedTime -= frametime;

			if (glfwWindowShouldClose(Window::getInstance().getWindow()) == 1)
				stop();

			update();

			if (frameCounter >= (double)1000000000)
			{
				fps = frames;
				frames = 0;
				frameCounter = 0;
			}
		}
		if (render)
		{
			render();
			frames++;
		}
		else
		{
			std::this_thread::sleep_for(1s);
		}
	}

	cleanUp();
}

void CoreEngine::stop() {
	if (!isRunning)
		return;

	isRunning = false;
}

void CoreEngine::render() {

}

void CoreEngine::update() {

}

void CoreEngine::cleanUp() {

}

