#include "Date.h"

#include <sstream>

Date::Date() : day(0), month(0), year(0) {
}

Date::Date(const int& day, const int& month, const int& year) : day(day), month(month), year(year) {
}

Date::Date(const Date& d) : day(d.day), month(d.month), year(d.year) {
}

Date::~Date() {
}



int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}


void Date::setDay(const int& day) {
    this->day = day;
}

void Date::setMonth(const int& month) {
    this->month = month;
}

void Date::setYear(const int& year) {
    this->year = year;
}



std::string Date::toString() const {
    std::stringstream ss;

    ss << day << ". " << month << ". " << year;

    return ss.str();
}


bool Date::operator==(const Date& other) const {
    bool sameDay   = (day == other.getDay());
    bool sameMonth = (month == other.getMonth());
    bool sameYear  = (year == other.getYear());

    if (sameDay && sameMonth && sameYear) return true;
    return false;
}

Date& Date::operator++() {
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (day == months[month - 1]) {
        day = 1;
        (month == 12 ? (month = 1, year = year + 1) : month = month + 1);
    }
    else {
        day += 1;
    }
    return *this;
}

Date Date::operator++(const int dummy) {
    Date tmp(*this);
    ++(*this);

    return tmp;
}

