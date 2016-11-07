#include "Input.h"

std::vector<int> Input::pushedKeys;
std::vector<int> Input::releasedKeys;
std::vector<int> Input::keysHolding;

std::vector<int> Input::pushedButtons;
std::vector<int> Input::releasedButtons;
std::vector<int> Input::buttonsHolding;

Vec2f Input::mousePosition;


void Input::update()
{
	clear();
	int key;
	int button;
	bool hold = false;
}


void Input::clear()
{
	releasedKeys.clear();
	pushedKeys.clear();
	releasedButtons.clear();
	pushedButtons.clear();
}

bool Input::getKeyDown(int key)
{
	auto pos = std::find(Input::pushedKeys.begin(), Input::pushedKeys.end(), key);
	if (pos != Input::pushedKeys.end())
		return true;
	else return false;
}
bool Input::getKeyReleased(int key)
{
	auto pos = std::find(Input::releasedKeys.begin(), Input::releasedKeys.end(), key);
	if (pos != Input::releasedKeys.end())
		return true;
	else return false;
}

bool Input::getHoldingKey(int key)
{
	auto pos = std::find(Input::keysHolding.begin(), Input::keysHolding.end(), key);
	if (pos != Input::keysHolding.end())
		return true;
	else return false;
}

bool Input::getButtonDown(int key)
{
	auto pos = std::find(Input::pushedButtons.begin(), Input::pushedButtons.end(), key);
	if (pos != Input::pushedButtons.end())
		return true;
	else return false;
}

bool Input::getButtonHolding(int key)
{
	auto pos = std::find(Input::buttonsHolding.begin(), Input::buttonsHolding.end(), key);
	if (pos != Input::buttonsHolding.end())
		return true;
	else return false;
}
	
bool Input::getButtonReleased(int key)
{
	auto pos = std::find(Input::releasedButtons.begin(), Input::releasedButtons.end(), key);
	if (pos != Input::releasedButtons.end())
		return true;
	else return false;
}

Vec2f Input::getMousePosition()
{
	return mousePosition;
}

void Input::setMousePosition(Vec2f pos)
{
}

void Input::setMouseGrabbed(bool grabbed)
{
}

