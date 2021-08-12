#include <iostream>
#include "Button.h"

Button::Button(Position position, Size size, std::string text) 
    : TextView(position, size, text), enabled(true) {
}


void Button::setEnabled(const bool enabled) {
    this->enabled = enabled;
}

bool Button::isEnabled() const {
    return enabled;
}


void Button::draw() const {
    TextView::draw();
    std::cout << "Enabled: " << ((enabled) ? "True" : "False") << "; ";
}


void Button::onClick() const {
    std::cout << "Button\n";
}
