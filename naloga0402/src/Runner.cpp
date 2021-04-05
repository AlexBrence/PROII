#include <sstream>
#include <iostream>

#include "Runner.h"
#include "Athlete.h"

Runner::Runner(const std::string& firstName, const std::string& lastName, const std::string& country, 
               const double height, const double weight, const unsigned int distance)
    : Athlete(firstName, lastName, country, height, weight), distance(distance) {
}


std::string Runner::getFirstName() const {
    return firstName;
}

std::string Runner::getLastName() const {
    return lastName;
}

std::string Runner::getCountry() const {
    return country;
}

double Runner::getHeight() const {
    return height;
}

double Runner::getWeight() const {
    return weight;
}



void Runner::setFirstName(const std::string& firstName) {
    this->firstName = firstName;
}

void Runner::setLastName(const std::string& lastName) {
    this->lastName = lastName;
}

void Runner::setCountry(const std::string& country) {
    this->country = country;
}

void Runner::setHeight(const double height) {
    this->height = height;
}

void Runner::setWeight(const double weight) {
    this->weight = weight;
}



std::string Runner::toString() const {
    std::stringstream ss;

    ss << "First name: " << firstName
       << "\nLast name: " << lastName
       << "\nCountry: " << country
       << "\nHeight: " << height << " cm"
       << "\nWeight: " << weight << " kg"
       << "\nRunning on: " << distance << " m";

    return ss.str();
}

void Runner::print() const {
    std::cout << toString();
}
