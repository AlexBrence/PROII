#pragma once
#include <string>
#include <vector>

#include "Athlete.h"
#include "Result.h"


class Competitor {
    private:
        unsigned int startNumber;
        Athlete* athlete;
        std::vector<Result> results;

    public:
        Competitor(const unsigned int startNumber, Athlete* athlete);

        unsigned int getStartNumber() const;
        Athlete* getAthlete() const;
        std::vector<Result> getResults() const;
        void addResult(const Result& result);
        std::string toString() const;
};


