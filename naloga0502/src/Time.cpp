#include <sstream>

#include "Time.h"

Time::Time() : hour(0), minute(0), second(0) {
}

Time::Time(unsigned int hour, unsigned int minute, unsigned int second)
    : hour(hour), minute(minute), second(second) {
}


bool Time::isEqual(const Time& second) const {
    if (hour == second.hour &&
        minute == second.minute && 
        this->second == second.second) {
        return true;
    }
    return false;
}

bool Time::isAfter(const Time &second) const {
    if (hour > second.hour) return true;
    else if (hour == second.hour && minute > second.minute) return true;
    else if (hour == second.hour && minute == second.minute && this->second > second.second) return true;

    return false;
}

bool Time::isBefore(const Time &second) const {
    if (hour < second.hour) return true;
    else if (hour == second.hour && minute < second.minute) return true;
    else if (hour == second.hour && minute == second.minute && this->second < second.second) return true;

    return false;
}

std::string Time::toString() const {
    std::stringstream ss;

    ss << ((hour < 10 ) ? "0" : "") << hour << ":"
       << ((minute < 10) ? "0" : "") << minute << ":"
       << ((second < 10) ? "0" : "") << second;

    return ss.str();
}
