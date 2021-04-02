#include "Game.h"
#include "GameState.h"
#include "Player.h"

Game::Game() : state(PLAY) {
}


void Game::addPlayer(const float x, const float y, const float width, const float height, const std::string &name) {
    gameObjects.push_back(new Player(x, y, width, height, name));
}

void Game::render() const {

}
