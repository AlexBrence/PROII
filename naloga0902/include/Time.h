#pragma once

#include <iostream>

class Time {
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

public:
    Time(unsigned int hour, unsigned int minute, unsigned int second);

    std::string toString() const;
};


