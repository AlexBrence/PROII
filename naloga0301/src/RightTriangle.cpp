#include "RightTriangle.h"


RightTriangle::RightTriangle(unsigned int a, unsigned int b) : a(a), b(b) {
}


unsigned int RightTriangle::getArea() const {
    return (a * b) / 2;
}
