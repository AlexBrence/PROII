#include <iostream>
#include "Game.h"

Game::Game() : state(GameState::PLAY) {
}



void Game::addPlayer(const float x, const float y, const float width, const float height, const std::string &name) {
    gameObjects.push_back(new Player(x, y, width, height, name));
}

void Game::render() const {
    for (const auto& go : gameObjects) {
        go->draw();
    }    
    
    if (state == GameState::GAME_OVER) {
        std::cout << "** GAME OVER **";
    }
    else if (state == GameState::PAUSE) {
        std::cout << "** PAUSE **";
    }
    std::cout << "\n";
}

void Game::update() {
    if (state != GameState::PLAY) return;

    for (const auto& go : gameObjects) {
        go->update();
    }
}


void Game::play() {
    state = GameState::PLAY;
}

void Game::pause() {
    state = GameState::PAUSE;
}

void Game::gameOver() {
    state = GameState::GAME_OVER;
}


std::vector<GameObject*> Game::getGameObjects() const {
    return gameObjects;
}
