#include "CoreEngine.h"

using namespace std::chrono_literals;

int CoreEngine::fps;

CoreEngine::CoreEngine() : isRunning(false),frametime(1/100.0f){}

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
		bool renderFrame = false;
		auto startTime = std::chrono::high_resolution_clock::now();
		long passedTime = (startTime - lastTime).count();
		lastTime = startTime;
		
		unprocessedTime += passedTime / (double)1000000000;
		frameCounter += passedTime;


		while (unprocessedTime > frametime)
		{
			// kommt hier nie raus
			renderFrame = true;
			unprocessedTime -= frametime;

			if (glfwWindowShouldClose(Window::getInstance().getWindow()))
				stop();

			update();

			if (frameCounter >= (double)1000000000)
			{
				fps = frames;
				frames = 0;
				frameCounter = 0;
				std::cout << fps << std::endl;
			}
		}
		if (renderFrame)
		{
			this->render();
			this->update();
			frames++;
		}
		else
		{
			std::this_thread::sleep_for(10ms);
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
	glClearColor(0.1, 0.7, 0.1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(Window::getInstance().getWindow());
}

void CoreEngine::update() {
	InputHandler::getInstance().update();
}

void CoreEngine::cleanUp() {

}

int CoreEngine::getFps() {
	return fps;
}

