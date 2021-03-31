#include "Circle.h"
#include "Math.h"

#include <iostream>
#include <sstream>

int Circle::counter = 0;

Circle::Circle() : radius(0.0) {
    counter++;
}

Circle::Circle(double radius) : radius(radius) {
    counter++;
}

Circle::Circle(const Circle& c) : radius(c.radius) {
    counter++;
}

Circle::~Circle() {
    counter--;
}


// STATIC METHODS 

void Circle::printCounter() {
    std::cout << "Counter: " << counter;
}

double Circle::diameter(const Circle& circle) {
    return circle.radius * 2;
}

double Circle::area(const Circle& circle) {
    return Math::square(circle.radius) * Math::pi;
}


// OTHER

std::string Circle::toString() const {
    std::stringstream ss;
    
    ss << "Radius: " << radius << " cm";
    ss << "\nDiameter: " << diameter(*this) << " cm";
    ss << "\nArea: " << area(*this) << " cm^2";
    
    return ss.str();
}

