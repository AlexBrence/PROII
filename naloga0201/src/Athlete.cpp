#include <iostream>
#include <sstream>

#include "Athlete.h"


Athlete::Athlete() 
    : firstName("None"), lastName("None"), country("None"), height(0.0), weight(0.0) {
}

Athlete::Athlete(std::string _firstName, std::string _lastName, std::string _country, double _height, double _weight) 
    : firstName(_firstName), lastName(_lastName), country(_country), height(_height), weight(_weight) {
}



// Methods

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

    ss << "First name: " << firstName;
    ss << "\nLast name: " << lastName;
    ss << "\nCountry: " << country;
    ss << "\nHeight: " << height << " kg";
    ss << "\nWeight: " << weight << " cm";

    return ss.str();
}

void Athlete::print() const {
    std::cout << toString();
}
