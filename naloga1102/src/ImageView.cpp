#include <iostream>
#include <sstream>
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

std::string ImageView::xmlString() const {
    std::stringstream ss;
    ss << View::xmlString() << "\n"
       << "imgPath=\"" << imgPath << "\"";
    return ss.str();
}

std::string ImageView::toXml() const {
    std::stringstream ss;
    ss << "<ImageView\n"
       << xmlString()
       << " />\n";
    return ss.str();
}
