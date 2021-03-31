#include <sstream>

#include "Competitor.h"



Competitor::Competitor(const unsigned int startNumber, Athlete* athlete, const double result) 
    : startNumber(startNumber), athlete(athlete), result(result) {
}


unsigned int Competitor::getStartNumber() const {
    return startNumber;
}

double Competitor::getResult() const {
    return result;
}

void Competitor::setResult(double result) {
    this->result = result;
}


std::string Competitor::toString() const {
    std::stringstream ss;

    ss << "Sart number: " << startNumber << "\n"
       << athlete->toString()
       << "\nResult: " << result << " seconds";

    return ss.str();
}
