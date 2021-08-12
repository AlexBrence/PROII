#include <iostream>
#include "ImageView.h"
#include "Position.h"

ImageView::ImageView(Position position, Size size, std::string imgPath) 
    : View(position, size), imgPath(imgPath) {
}


void ImageView::setImgPath(const std::string &imgPath) {
    this->imgPath = imgPath;
}


std::string ImageView::getImgPath() const {
    return imgPath;
}


void ImageView::draw() const {
    View::draw();
    std::cout << "Img Path: " << imgPath << "; ";
}

void ImageView::onClick() const {
    std::cout << "ImageView\n";
}
