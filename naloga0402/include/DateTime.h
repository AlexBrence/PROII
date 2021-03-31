#pragma once

#include <string>

#include "Date.h"
#include "Time.h"

class DateTime {
    private:
        Date date;
        Time time;

    public:
        DateTime(const std::string& dateTime);

        bool isEqual(const DateTime& second) const;
        bool isAfter(const DateTime& second) const;
        bool isBefore(const DateTime& second) const;
        std::string toString() const;
};


