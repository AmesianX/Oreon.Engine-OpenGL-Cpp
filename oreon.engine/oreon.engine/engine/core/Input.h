#pragma once

#include <engine\math\Vec2f.h>
#include <vector>

class Input
{
public:

	static void update();
	static void clear();
	static bool getKeyDown(int key);
	static bool getKeyReleased(int key);
	static bool getHoldingKey(int key);
	static bool getButtonReleased(int key);
	static bool getButtonDown(int key);
	static bool getButtonHolding(int key);
	static Vec2f getMousePosition();
	static void setMousePosition(Vec2f pos);
	static void setMouseGrabbed(bool grabbed);
	
private:

	static Vec2f mousePosition;

	static std::vector<int> pushedKeys;
	static std::vector<int> releasedKeys;
	static std::vector<int> keysHolding;

	static std::vector<int> pushedButtons;
	static std::vector<int> releasedButtons;
	static std::vector<int> buttonsHolding;
};