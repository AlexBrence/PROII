#include <iostream>
#include <sstream>
#include "TextView.h"

TextView::TextView(Position position, Size size, std::string text) 
    : View(position, size), text(text) {
}


void TextView::setText(const std::string &text) {
    this->text = text;
}


std::string TextView::getText() const {
    return text;
}


void TextView::draw() const {
    View::draw();
    std::cout << "Text: " << text << "; ";
}


std::string TextView::xmlString() const {
    std::stringstream ss;
    ss << View::xmlString() << "\n"
       << "text=\"" << text << "\"";
    return ss.str();
}

std::string TextView::toXml() const {
    std::stringstream ss;
    ss << "<TextView\n"
       << xmlString()
       << " />\n";
    return ss.str();
}
