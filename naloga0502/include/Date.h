#pragma once

#include <string>


class Date {
    private:
        unsigned int day, month, year;

    public:
        // So lahko vsepovsod vsi parametri 'const'?
        Date();
        Date(unsigned int day, unsigned int month, unsigned int year);

        bool isEqual(const Date& second) const;
        bool isAfter(const Date& second) const;
        bool isBefore(const Date& second) const;
        std::string toString() const;
};


