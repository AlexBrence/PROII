#include <sstream>

#include "Competitor.h"
#include "Result.h"



Competitor::Competitor(const unsigned int startNumber, Athlete* athlete) 
    : startNumber(startNumber), athlete(athlete) {
}


unsigned int Competitor::getStartNumber() const {
    return startNumber;
}

Athlete* Competitor::getAthlete() const {
    return athlete;
}

std::vector<Result> Competitor::getResults() const {
    return results;
}

void Competitor::addResult(const Result& result) {
    results.emplace_back(result); 
}

std::string Competitor::toString() const {
    std::stringstream ss;

    ss << "Start number: " << startNumber << "\n"
       << athlete->toString()
       << "\nResults: ";

    for (const auto& r : results) {     // Check if it is getting the last result from vector
        ss << r.toString() << ((&r == &results[results.size() - 1]) ? "." : ", ");
    }

    return ss.str();
}
