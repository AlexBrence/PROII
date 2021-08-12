#include <iostream>
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


void TextView::onClick() const {
    std::cout << "TextView\n";
}
