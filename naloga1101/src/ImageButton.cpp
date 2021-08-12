#include "ImageButton.h"
#include <iostream>

ImageButton::ImageButton(Position position, Size size, std::string text, std::string imgPath)
    : TextView(position, size, text), View(position, size), Button(position, size, text), ImageView(position, size, imgPath) {
}

void ImageButton::draw() const {
    Button::draw();
    std::cout << imgPath << "; ";
}


void ImageButton::onClick() const {
    std::cout << "ImageButton\n";
}
