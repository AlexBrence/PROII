#include <iostream>
#include <sstream>

#include "Athlete.h"


Athlete::Athlete(const std::string& firstName, const std::string& lastName, const std::string& country, const double height, const double weight) 
    : firstName(firstName), lastName(lastName), country(country), height(height), weight(weight) {
}

std::string Athlete::getFirstName() const {
    return firstName;
}

std::string Athlete::getLastName() const {
    return lastName;
}

std::string Athlete::getCountry() const {
    return country;
}

double Athlete::getHeight() const {
    return height;
}

double Athlete::getWeight() const {
    return weight;
}



void Athlete::setFirstName(const std::string& firstName) {
    this->firstName = firstName;
}

void Athlete::setLastName(const std::string& lastName) {
    this->lastName = lastName;
}

void Athlete::setCountry(const std::string& country) {
    this->country = country;
}

void Athlete::setHeight(const double height) {
    this->height = height;
}

void Athlete::setWeight(const double weight) {
    this->weight = weight;
}



std::string Athlete::toString() const {
    std::stringstream ss;

    ss << "First name: " << firstName
       << "\nLast name: " << lastName
       << "\nCountry: " << country
       << "\nHeight: " << height << " cm"
       << "\nWeight: " << weight << " kg";

    return ss.str();
}

void Athlete::print() const {
    std::cout << toString();
}
