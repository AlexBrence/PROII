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

        virtual std::string getFirstName() const;
        virtual std::string getLastName() const;
        virtual std::string getCountry() const;
        virtual double getHeight() const;
        virtual double getWeight() const;

        virtual void setFirstName(const std::string& firstName);
        virtual void setLastName(const std::string& lastName);
        virtual void setCountry(const std::string& country);
        virtual void setHeight(const double height);
        virtual void setWeight(const double weight);

        virtual std::string toString() const;
        virtual void print() const;

        virtual unsigned int getNumberOfMedals() const = 0;
};


