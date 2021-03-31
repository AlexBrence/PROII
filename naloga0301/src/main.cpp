#include <iostream>
#include <random>
#include <vector>

#include "Circle.h"
#include "Math.h"
#include "RightTriangle.h"


std::vector<Circle*> generateCircles(const int number) {
    std::vector<Circle*> circles;
    std::random_device rd;
    std::uniform_real_distribution<double> dist(1.0, 50.0);    

    for (int i = 0; i < number; i++) {
        circles.emplace_back(new Circle(dist(rd))); 
    }
    return circles;
}

void printCircles(const std::vector<Circle*>& circles) {
    for (size_t i = 0; i < circles.size(); i++) {
        std::cout << "\n* Circle " << i + 1 << " *\n";
        std::cout << circles[i]->toString() << "\n\n";
    }
}

void deleteCircles(std::vector<Circle*>& circles) {
    for (const auto& c : circles) {
        delete c;
    }
}


int main() {
    std::cout << "===== printCounter FUNCTION =====\n";
    Circle::printCounter();
    std::cout << std::endl;

    // Generating circles
    std::vector<Circle*> circles = generateCircles(10);

    // Printing out content of circles
    printCircles(circles);

    std::cout << "===== printCounter FUNCTION AFTER FILLING VECTOR =====\n";
    Circle::printCounter();
    std::cout << std::endl;

    // Find max between 2 circles
    Circle bigger = Math::max(*circles[1], *circles[2]);
    std::cout << "\n===== BIGGER CIRCLE BETWEEN 2 AND 3 =====\n";
    std::cout << "* Circle 2 *\n" << circles[1]->toString() << "\n\n";
    std::cout << "* Circle 3 *\n" << circles[2]->toString() << "\n\n";
    std::cout << "===== IS =====\n";
    std::cout << bigger.toString() << std::endl;


    std::cout << "===== printCounter FUNCTION AFTER COPY CONSTRUCTOR =====\n";
    Circle::printCounter();
    std::cout << std::endl;

    // Delete circles
    deleteCircles(circles);

    std::cout << "\n===== printCounter FUNCTION AFTER DELETION =====\n";
    Circle::printCounter();
    std::cout << std::endl;


    std::cout << "\n===== getArea FUNCTION FROM RIGHTTRIANGLE CLASS =====\n";
    RightTriangle* rt = new RightTriangle(23, 12);
    double triangleArea = rt->getArea();
    std::cout << "Area: " << triangleArea << " cm^2" << std::endl;

    delete rt;
    return 0;
}
