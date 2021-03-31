#include <sstream>
#include <vector>

#include "DateTime.h"
#include "Time.h"


DateTime::DateTime(const std::string& dateTime) {
    std::vector<unsigned int> vec;
    std::string tmp = "";

    // Get date and time from 'dd/mm/yyyy hh:mm:ss' format
    for (size_t i = 0; i < dateTime.size(); i++) {
        if (dateTime[i] == '/' || dateTime[i] == ':') {
            vec.push_back((unsigned int)std::stoi(tmp));
            tmp = "";
        }
        else if (dateTime[i] == ' ') {
            vec.push_back((unsigned int)std::stoi(tmp));
            tmp = "";
        } else {
            tmp += dateTime[i];
        }
    }
    vec.push_back((unsigned int)std::stoi(tmp));

    unsigned int day = vec[0], month = vec[1], year = vec[2];
    unsigned int hour = vec[3], min = vec[4], sec = vec[5];
    date = Date(day, month, year);
    time = Time(hour, min, sec);
}


bool DateTime::isEqual(const DateTime &second) const {
    return (date.isEqual(second.date) && time.isEqual(second.time));
}

bool DateTime::isAfter(const DateTime& second) const {
    if (date.isAfter(second.date)) return true;
    else if (date.isEqual(second.date) && time.isAfter(second.time)) return true;

    return false;
}

bool DateTime::isBefore(const DateTime &second) const {
    if (date.isBefore(second.date)) return true;
    else if (date.isEqual(second.date) && time.isBefore(second.time)) return true;

    return false;
}


std::string DateTime::toString() const {
    std::stringstream ss;

    ss << date.toString() << " at "
       << time.toString();

    return ss.str();
}
