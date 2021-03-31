#pragma once

#include <string>
#include <vector>

#include "Date.h"
#include "Competitor.h"


class Competition {
    private:
        std::string name;
        Date startDate;
        std::vector<Competitor> competitors; 

    public:
        Competition(const std::string& name, const Date& startDate);

        void addCompetitor(Athlete* athlete);
        void addResult(const unsigned int startNumber, const double result);

        void printCompetitors() const;
        std::vector<Competitor> getQualifiedCompetitors(const double limit) const;
        Competitor* getCompetitionWinner();
        std::string toString() const;
};


