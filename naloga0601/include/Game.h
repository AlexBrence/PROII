#pragma once

#include <string>
#include <vector>
#include "Player.h"

enum GameState {
    PLAY,
    GAME_OVER,
    PAUSE
};


class Game {
    private:
        GameState state;
        std::vector<GameObject*> gameObjects;

    public:
        Game();

        void addPlayer(const float x, const float y, const float width, const float height, const std::string& name);
        void render() const;
        void update();
        void play();
        void pause();
        void gameOver();

        // To delete game objects at the end
        std::vector<GameObject*> getGameObjects() const;
};


