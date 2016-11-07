#include "Game.h"

Game::Game(int width, int height, const char* title) : engine(CoreEngine()){
}

void Game::launch() {
	engine.start();
}

void Game::init() {

}

CoreEngine Game::getEngine() {
	return engine;
}

