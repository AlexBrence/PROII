#pragma once

#include <string>


class Position {
    private:
        float x, y;

    public:
        Position(float x, float y);

        // Je dobra praksa ce na koncu uporabim 'noexcept' pri get metodah?
        void setX(const float x);
        void setY(const float y);

        float getX() const;
        float getY() const;
        std::string toString() const;
};


