#pragma once

#include <string>
#include <vector>
#include "Result.h"


class Athlete {
    protected:
        std::string firstName, lastName, country;
        double height, weight;      // cm, kg

    public:
        Athlete() = default;
        Athlete(const std::string& firstName, const std::string& lastName, const std::string& country, const double height, const double weight);
        virtual ~Athlete() = default;

        virtual std::string getFirstName() const = 0;
        virtual std::string getLastName() const = 0;
        virtual std::string getCountry() const = 0;
        virtual double getHeight() const = 0;
        virtual double getWeight() const = 0;

        virtual void setFirstName(const std::string& firstName) = 0;
        virtual void setLastName(const std::string& lastName) = 0;
        virtual void setCountry(const std::string& country) = 0;
        virtual void setHeight(const double height) = 0;
        virtual void setWeight(const double weight) = 0;

        virtual std::string toString() const = 0;
        virtual void print() const = 0;
};


