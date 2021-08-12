#include "ImageButton.h"
#include <iostream>
#include <sstream>

ImageButton::ImageButton(Position position, Size size, std::string text, std::string imgPath)
    : TextView(position, size, text), View(position, size), Button(position, size, text), ImageView(position, size, imgPath) {
}

void ImageButton::draw() const {
    Button::draw();
    std::cout << imgPath << "; ";
}


std::string ImageButton::toXml() const {
    std::stringstream ss;
    ss << "<ImageButton\n"
       << Button::xmlString() << "\n" 
       << ImageView::xmlString()
       << " />\n";
    return ss.str();
}
