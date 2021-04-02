#pragma once

#include <string>
#include "GameObject.h"

class Player : public GameObject {
    private:
        std::string name;

    public:
        Player(const float x, const float y, const float width, const float height, const std::string& name);

        void draw() const override;
        void update() override;
};


