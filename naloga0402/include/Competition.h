#pragma once

#include <string>
#include <vector>

#include "DateTime.h"
#include "Competitor.h"


class Competition {
    private: 
        std::string name;
        DateTime startDate, endDate;
        std::vector<Competitor> competitors; 

    public:
        Competition(const std::string& name, const DateTime& startDate, const DateTime& endDate);

        void addCompetitor(Athlete* athlete);
        void addResult(const unsigned int startNumber, const Result& result);

        std::vector<Competitor> getCompetitors() const;
        std::vector<Competitor> getQualifiedCompetitors(const double limit, const std::string& unit) const;
        void printCompetitors() const;
        std::string toString() const;

        static std::vector<Competition*> getCompetitionsBetween(const std::vector<Competition*> competitions,
                                                                const DateTime& from, const DateTime& to);
};



