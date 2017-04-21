#include "InputHandler.h"

InputHandler InputHandler::instance;

InputHandler& InputHandler::getInstance() {
	return instance;
}

void InputHandler::update()
{
	glfwPollEvents();
	clear();
	int key;
	int button;
	bool hold = false;
}


void InputHandler::clear()
{
	releasedKeys.clear();
	pushedKeys.clear();
	releasedButtons.clear();
	pushedButtons.clear();
}

bool InputHandler::getKeyDown(int key)
{
	auto pos = std::find(InputHandler::pushedKeys.begin(), InputHandler::pushedKeys.end(), key);
	if (pos != InputHandler::pushedKeys.end())
		return true;
	else return false;
}
bool InputHandler::getKeyReleased(int key)
{
	auto pos = std::find(InputHandler::releasedKeys.begin(), InputHandler::releasedKeys.end(), key);
	if (pos != InputHandler::releasedKeys.end())
		return true;
	else return false;
}

bool InputHandler::getHoldingKey(int key)
{
	auto pos = std::find(InputHandler::keysHolding.begin(), InputHandler::keysHolding.end(), key);
	if (pos != InputHandler::keysHolding.end())
		return true;
	else return false;
}

bool InputHandler::getButtonDown(int key)
{
	auto pos = std::find(InputHandler::pushedButtons.begin(), InputHandler::pushedButtons.end(), key);
	if (pos != InputHandler::pushedButtons.end())
		return true;
	else return false;
}

bool InputHandler::getButtonHolding(int key)
{
	auto pos = std::find(InputHandler::buttonsHolding.begin(), InputHandler::buttonsHolding.end(), key);
	if (pos != InputHandler::buttonsHolding.end())
		return true;
	else return false;
}
	
bool InputHandler::getButtonReleased(int key)
{
	auto pos = std::find(InputHandler::releasedButtons.begin(), InputHandler::releasedButtons.end(), key);
	if (pos != InputHandler::releasedButtons.end())
		return true;
	else return false;
}

Vec2f InputHandler::getMousePosition()
{
	return mousePosition;
}

void InputHandler::setMousePosition(Vec2f pos)
{
}

void InputHandler::setMouseGrabbed(bool grabbed)
{
}

