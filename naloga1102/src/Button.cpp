#include <iostream>
#include <sstream>
#include "Button.h"
#include "TextView.h"

Button::Button(Position position, Size size, std::string text) 
    : TextView(position, size, text), enabled(true) {
}


void Button::setEnabled(const bool enabled) {
    this->enabled = enabled;
}

bool Button::isEnabled() const {
    return enabled;
}


void Button::onClick() {
    if (enabled) {
        std::cout << text << std::endl;
    }
}

void Button::draw() const {
    TextView::draw();
    std::cout << "Enabled: " << ((enabled) ? "True" : "False") << "; ";
}


std::string Button::xmlString() const {
    std::stringstream ss;
    ss << TextView::xmlString() << "\n"
       << "enabled=\"" << ((enabled) ? "true" : "false") << "\"";
    return ss.str();
}

std::string Button::toXml() const {
    std::stringstream ss;
    ss << "<Button\n"
       << xmlString()
       << " />\n";
    return ss.str();
}
