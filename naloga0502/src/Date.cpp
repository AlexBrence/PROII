#include <sstream>

#include "Date.h"


Date::Date() : day(0), month(0), year(0) {
}

Date::Date(unsigned int day, unsigned int month, unsigned int year) 
    : day(day), month(month), year(year) {
}



bool Date::isEqual(const Date& second) const {
    if (day == second.day &&
        month == second.month &&
        year == second.year) {
        return true;
    }
    return false;
}

bool Date::isAfter(const Date& second) const {
    if (year > second.year) return true;
    else if (year == second.year && month > second.month) return true;
    else if (year == second.year && month == second.month && day > second.day) return true;

    return false;
}

bool Date::isBefore(const Date& second) const {
    if (year < second.year) return true;
    else if (year == second.year && month < second.month) return true;
    else if (year == second.year && month == second.month && day < second.day) return true;

    return false;
}


std::string Date::toString() const {
    std::stringstream ss;

    ss << ((day < 10) ? "0" : "") << day << ". "
       << ((month < 10) ? "0" : "") << month << ". "
       << year;

    return ss.str();
}
