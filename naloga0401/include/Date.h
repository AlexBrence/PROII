#pragma once

#include <string>


class Date {
    private:
        unsigned int day, month, year;

    public:
        Date(unsigned int day, unsigned int month, unsigned int year);

        std::string toString() const;
};


