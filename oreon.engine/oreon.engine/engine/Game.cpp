#include "Game.h"

Game::Game() : engine(CoreEngine()){
}

void Game::launch() {
	engine.start();
}

void Game::init() {

}

CoreEngine Game::getEngine() {
	return engine;
}

