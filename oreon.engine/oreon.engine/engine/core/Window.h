#pragma once

#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <iostream>

class Window {

public:

	static Window& getInstance();
	void create(int width, int height, const char* title);
	void render();
	void dispose();
	GLFWwindow* getWindow();


private:
	static Window instance;
	GLFWwindow* window;
	int width;
	int height;
	int getWidth();
	int getHeight();
	void setWidth(const int width);
	void setHeight(const int height);
};

