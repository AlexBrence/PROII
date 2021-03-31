#pragma once
#include <string>

#include "Athlete.h"


class Competitor {
    private:
        unsigned int startNumber;
        Athlete* athlete;
        double result;

    public:
        Competitor(const unsigned int startNumber, Athlete* athlete, const double result);

        unsigned int getStartNumber() const;
        double getResult() const;

        void setResult(double result);
        std::string toString() const;
};


