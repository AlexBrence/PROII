#pragma once

#include "Date.h"
#include "Time.h"

class DateTime {
private:
    Date date;
    Time time;

public:
    DateTime(Date date, Time time);

    std::string toString() const;
};


