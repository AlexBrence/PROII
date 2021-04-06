#pragma once

#include <string>
#include "Athlete.h"

class Runner : public Athlete {
    private:
        unsigned int distance, medals;

    public:
        Runner(const std::string& firstName, const std::string& lastName, const std::string& country,
               const double height, const double weight, const unsigned int distance, const unsigned int medals);

        unsigned int getNumberOfMedals() const override;
        std::string toString() const override;
};


