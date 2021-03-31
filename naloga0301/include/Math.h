#pragma once

#include "Circle.h"


class Math {
    private:
        Math();

    public:
        static constexpr double pi = 3.14159265358979323846;

        static double square(const double number);
        static Circle max(const Circle& c1, const Circle& c2);
};


