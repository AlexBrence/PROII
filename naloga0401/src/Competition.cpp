#include <iostream>
#include <sstream>
#include <vector>

#include "Competition.h"
#include "Competitor.h"
#include "Date.h"


Competition::Competition(const std::string& name, const Date& startDate) 
    : name(name), startDate(startDate) {
}



void Competition::addCompetitor(Athlete* athlete) {
    unsigned int numberOfCompetitors = competitors.size();
    unsigned int lastCompetiorStartNumber;

    // Applying start number
    if (numberOfCompetitors > 0) {
        lastCompetiorStartNumber = competitors[numberOfCompetitors - 1].getStartNumber();
    }
    else {
        lastCompetiorStartNumber = 0;
    }
    competitors.emplace_back(Competitor(lastCompetiorStartNumber + 1, athlete, 0.0));
}


void Competition::addResult(const unsigned int startNumber, const double result) {
    for (auto& c : competitors) {
        if (c.getStartNumber() == startNumber) {
            c.setResult(result);
        }
    }
}


void Competition::printCompetitors() const {
    for (const auto& c : competitors) {
        std::cout << c.toString() << "\n\n";
    }
}


std::vector<Competitor> Competition::getQualifiedCompetitors(const double limit) const {
    std::vector<Competitor> qualifiedCompetitors;

    for (const auto& c : competitors) {
        if (c.getResult() < limit) {
            qualifiedCompetitors.push_back(c);
        }
    }

    return qualifiedCompetitors;
}


Competitor* Competition::getCompetitionWinner() {
    double min = competitors[0].getResult();
    Competitor* winner = &competitors[0];

    for (auto& c : competitors) {
        if (c.getResult() < min) {
            winner = &c;
            min = c.getResult();
        }
    }
    return winner;
}


std::string Competition::toString() const {
    std::stringstream ss;

    ss << "=== " << name << " ===\n";
    ss << startDate.toString() << "\n\n";
    ss << "=== Competitors ===\n";
    for (const auto& c : competitors) {
        ss << c.toString() << "\n\n";
    }

    return ss.str();
}
