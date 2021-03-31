#pragma once

#include <string>


class Athlete {
private:
    std::string firstName, lastName, country;
    double height, weight;

public:
    // Constructors
    Athlete();
    Athlete(std::string firstName, std::string lastName, std::string country, double height, double weight);

    // Methods
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getCountry() const;
    double getHeight() const;
    double getWeight() const;

    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setCountry(const std::string& country);
    void setHeight(const double height);
    void setWeight(const double weight);

    void print() const;
    std::string toString() const;
};


