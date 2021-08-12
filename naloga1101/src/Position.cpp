#include <sstream>
#include "Position.h"

Position::Position(float x, float y) : x(x), y(y) {
}


void Position::setX(const float x) {
    this->x = x;
}

void Position::setY(const float y) {
    this->y = y;
}


float Position::getX() const {
    return x;
}

float Position::getY() const {
    return y;
}

std::string Position::toString() const {
    std::stringstream ss;
    ss << "Pos: (" << x << ", " << y << ")";
    return ss.str();
}
