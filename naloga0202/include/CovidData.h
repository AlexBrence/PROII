#pragma once

#include <string>

class CovidData {
    private:
        unsigned int day, month, year, activeCases, negativeCases, positiveCases;

    public:
        CovidData();
        CovidData(unsigned int _day, unsigned int _month, unsigned int _year,
                  unsigned int _activeCases, unsigned int _negativeCases, unsigned int _positiveCases);

        ~CovidData();

        unsigned int getDay() const;
        unsigned int getMonth() const;
        unsigned int getYear() const;
        unsigned int getActiveCases() const;
        double positiveTestsShare() const;

        void setActiveCases(const unsigned int activeCases);

        std::string toString() const;
};


