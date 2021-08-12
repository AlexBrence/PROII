#include <sstream>
#include "Size.h"

Size::Size(float width, float height, Unit unit) : width(width), height(height), unit(unit) {
}


void Size::setWitdh(const float width) {
    this->width = width;
}

void Size::setHeight(const float height) {
    this->height = height;
}

void Size::setUnit(const Unit& unit) {
    this->unit = unit;
}


float Size::getWidth() const {
    return width;
}

float Size::getHeight() const {
    return height;
}

std::string Size::getUnit() const {
    if (unit == Unit::px) return "px";
    if (unit == Unit::in) return "in";
    if (unit == Unit::mm) return "mm";
    if (unit == Unit::pt) return "pt";
    if (unit == Unit::dp) return "dp";
}


std::string Size::toString() const {
    std::stringstream ss;
    ss << "width=\"" << width << getUnit() << "\"" 
       << "\nheight=\"" << height << getUnit() << "\"";
    return ss.str();
}
