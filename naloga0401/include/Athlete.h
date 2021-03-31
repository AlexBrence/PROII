#pragma once

#include <string>


class Athlete {
private:
    std::string firstName, lastName, country;
    double height, weight;

public:
    // Constructors
    Athlete();
    Athlete(const std::string& firstName, const std::string& lastName, const std::string& country, const double height, const double weight);

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

    std::string toString() const;
    void print() const;
};


