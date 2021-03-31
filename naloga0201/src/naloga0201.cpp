#include <iostream>
#include <cmath>

#include "Athlete.h"


void printBmi(const Athlete& athlete) {
    float athleteHeightMeters = athlete.getHeight() / 100;
    float athleteWeight = athlete.getWeight();


    double bmi = athleteWeight / pow(athleteHeightMeters, 2);
    std::cout << "Athlete " << athlete.getFirstName() << " " << athlete.getLastName() << " has BMI " << bmi << std::endl;
}


int main() {
    Athlete athlete1;
    Athlete athlete2("Neki", "Luka", "Madzarska", 187.3, 86.1);
    Athlete* athlete3 = new Athlete();
    Athlete* athlete4 = new Athlete("Neki", "Janko", "Madagaskar", 165.1, 90.3);
    Athlete* athlete5 = new Athlete();

    std::cout << "===== ATHLETE 1 =====\n";
    std::cout << "* Get first name *:\n" << athlete1.getFirstName();
    std::cout << "\n* Get country *:\n" << athlete1.getCountry();

    std::cout << "\n\n===== ATHLETE 2 =====\n";
    std::cout << "* Print method *\n";
    athlete2.print();
    std::cout << "\n* Get BMI *:\n";
    printBmi(athlete2);


    std::cout << "\n\n===== ATHLETE 3 =====\n";
    std::cout << "* Print method (default) *\n";
    athlete3->print();

    // Setting variables 
    athlete3->setFirstName("SeEn");
    athlete3->setLastName("Luka");
    athlete3->setCountry("Kitajska");
    athlete3->setHeight(178.5);
    athlete3->setWeight(82.5);

    std::cout << "\n* Print method (after setting) *\n";
    athlete3->print();
    std::cout << "\n* Get BMI *:\n";
    printBmi(*athlete3);


    std::string athlete4String = athlete4->toString();
    std::cout << "\n\n===== ATHLETE 4 =====\n";
    std::cout << "* To string *\n" << athlete4String;


    std::cout << "\n\n===== ATHLETE 5 =====\n";
    std::cout << "* His name should be None *\n" << athlete5->getFirstName();
    athlete5->setFirstName("Stojan");
    std::cout << "\n* His name should be Stojan now *\n" << athlete5->getFirstName() << std::endl;




    delete athlete3;
    delete athlete4;
    delete athlete5;
    return 0;
}
