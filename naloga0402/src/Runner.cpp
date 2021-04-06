#include <sstream>
#include <iostream>

#include "Runner.h"
#include "Athlete.h"

Runner::Runner(const std::string& firstName, const std::string& lastName, const std::string& country, 
               const double height, const double weight, const unsigned int distance, const unsigned int medals)
    : Athlete(firstName, lastName, country, height, weight), distance(distance), medals(medals) {
}

unsigned int Runner::getNumberOfMedals() const {
    return medals;
}

std::string Runner::toString() const {
    std::stringstream ss;

    ss << Athlete::toString()
       << "\nRunning on: " << distance << " m"
       << "\nAll medals: " << medals;

    return ss.str();
}

