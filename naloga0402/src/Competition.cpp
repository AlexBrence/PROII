#include <iostream>
#include <sstream>
#include <vector>

#include "Competition.h"
#include "DateTime.h"


Competition::Competition(const std::string& name, const DateTime& startDate, const DateTime& endDate) 
    : name(name), startDate(startDate), endDate(endDate) {
}



void Competition::addCompetitor(Athlete* athlete) {
    unsigned int numberOfCompetitors = competitors.size();
    unsigned int lastCompetitorStartNumber;

    // Applying start number
    if (numberOfCompetitors > 0) {
        lastCompetitorStartNumber = competitors[numberOfCompetitors - 1].getStartNumber();
    } else {
        lastCompetitorStartNumber = 0;
    }
    competitors.emplace_back(Competitor(lastCompetitorStartNumber + 1, athlete));
}


void Competition::addResult(const unsigned int startNumber, const Result& result) {
    for (auto& c : competitors) {
        if (c.getStartNumber() == startNumber) {
            c.addResult(result);
        }
    }
}


std::vector<Competitor> Competition::getCompetitors() const {
    return competitors;
}


std::vector<Competitor> Competition::getQualifiedCompetitors(const double limit, const std::string& unit) const {
    std::vector<Competitor> qualifiedCompetitors;

    // Go through all competitors
    for (const auto& c : competitors) {
        // Get every result from a single competitor
        std::vector<Result> competitorResults = c.getResults();

        for (const auto& cr : competitorResults) {
            if (cr.getResult() < limit && cr.getUnit() == unit) {
                qualifiedCompetitors.push_back(c);
                break;
            }
        }
    }
    return qualifiedCompetitors;
}


void Competition::printCompetitors() const {
    for (const auto& c : competitors) {
        std::cout << c.toString() << "\n\n";
    }
}


std::string Competition::toString() const {
    std::stringstream ss;

    ss << "=== " << name << " ===\n"
       << "Duration: From " 
       << startDate.toString() << " to "
       << endDate.toString() << "\n\n"

       << "=== Competitors ===\n";
    for (const auto& c : competitors) {
        ss << c.toString() << "\n\n";
    }
    return ss.str();
}




// STATIC
std::vector<Competition*> Competition::getCompetitionsBetween(const std::vector<Competition*> competitions, const DateTime& from, const DateTime& to) {
    DateTime fromTmp = DateTime(from);
    DateTime toTmp = DateTime(to);

    std::vector<Competition*> competitionsBetween;

    for (const auto& c : competitions) {
        if ((c->startDate.isEqual(fromTmp) || c->startDate.isAfter(fromTmp)) && (c->endDate.isEqual(toTmp) || c->endDate.isBefore(toTmp))) {
            competitionsBetween.push_back(c);
        }
    } 
    return competitionsBetween;
}
