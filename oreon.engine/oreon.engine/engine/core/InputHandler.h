#pragma once

#include <engine\math\Vec2f.h>
#include <GLFW\glfw3.h>
#include <vector>

class InputHandler
{
public:

	static InputHandler& getInstance();
	void update();
	void clear();
	bool getKeyDown(int key);
	bool getKeyReleased(int key);
	bool getHoldingKey(int key);
	bool getButtonReleased(int key);
	bool getButtonDown(int key);
	bool getButtonHolding(int key);
	Vec2f getMousePosition();
	void setMousePosition(Vec2f pos);
	void setMouseGrabbed(bool grabbed);
	
private:

	static InputHandler instance;
	Vec2f mousePosition;

	std::vector<int> pushedKeys;
	std::vector<int> releasedKeys;
	std::vector<int> keysHolding;

	std::vector<int> pushedButtons;
	std::vector<int> releasedButtons;
	std::vector<int> buttonsHolding;
};