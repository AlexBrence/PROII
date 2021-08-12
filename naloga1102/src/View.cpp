#include <iostream>
#include <sstream>
#include "View.h"


View::View(Position position, Size size) : position(position), size(size), visible(true) {
}


void View::setPosition(const float x, const float y) {
    position.setX(x);
    position.setY(y);
}

void View::setSize(const float width, const float height, const Unit& unit) {
    size.setWitdh(width);
    size.setHeight(height);
    size.setUnit(unit);
}

void View::setVisible(const bool visible) {
    this->visible = visible;
}


Position View::getPosition() const {
    return position;
}

Size View::getSize() const {
    return size;
}

bool View::isVisible() const {
    return visible;
}


void View::draw() const {
    std::cout << "Visible: " << ((visible) ? "True" : "False") << "; "
              << position.toString() << "; "
              << size.toString() << "; ";
}

std::string View::xmlString() const {
    std::stringstream ss;
    ss << size.toString() << "\n"
       << "visible=\"" << ((visible) ? "true" : "false") << "\"";
    return ss.str();
}

std::string View::toXml() const {
    std::stringstream ss;
    ss << size.toString() << "\n"
       << "visible=\"" << ((visible) ? "true" : "false") << "\"";
    return ss.str();
}


