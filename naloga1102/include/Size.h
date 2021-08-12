#pragma once

#include <string>
#include "Enums.h"

class Size {
    private:
        float width, height;
        Unit unit;

    public:
        Size(float width, float height, Unit unit);

        void setWitdh(const float width);
        void setHeight(const float height);
        void setUnit(const Unit& unit);

        float getWidth() const;
        float getHeight() const;
        std::string getUnit() const;

        std::string toString() const;
};


