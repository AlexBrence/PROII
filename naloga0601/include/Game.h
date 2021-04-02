#pragma once

#include <vector>
#include <string>
#include "GameObject.h"
#include "GameState.h"

class Game {
    private:
        GameState state;
        std::vector<GameObject*> gameObjects;

    public:
        Game();

        void addPlayer(const float x, const float y, const float width, const float height, const std::string& name);
        void render() const;
};


