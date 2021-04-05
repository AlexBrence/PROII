#pragma once

#include <string>
#include "Athlete.h"

class Runner : public Athlete {
    private:
        unsigned int distance;

    public:
        Runner(const std::string& firstName, const std::string& lastName, const std::string& country,
               const double height, const double weight, const unsigned int distance);

        std::string getFirstName() const override;
        std::string getLastName() const override;
        std::string getCountry() const override;
        double getHeight() const override;
        double getWeight() const override;

        void setFirstName(const std::string& firstName) override;
        void setLastName(const std::string& lastName) override;
        void setCountry(const std::string& country) override;
        void setHeight(const double height) override;
        void setWeight(const double weight) override;

        std::string toString() const override;
        void print() const override;
};


