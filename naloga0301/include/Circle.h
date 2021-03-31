#pragma once

#include <string>


class Circle {
    private:
        double radius;

        static int counter; 

    public:
        Circle();
        Circle(double radius);
        Circle(const Circle& c);
        ~Circle();

        static void printCounter();
        static double diameter(const Circle& circle);
        static double area(const Circle& circle);

        std::string toString() const;
};


