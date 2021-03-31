#pragma once

#include <string>


class Time {
    private:
        unsigned int hour, minute, second;

    public:
        Time();
        Time(unsigned int hour, unsigned int minute, unsigned int second);

        bool isEqual(const Time& second) const;
        bool isAfter(const Time& second) const;
        bool isBefore(const Time& second) const;
        std::string toString() const;
};
