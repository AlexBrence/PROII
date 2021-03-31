#include "CovidData.h"

#include <sstream>


CovidData::CovidData() : day(0), month(0), year(0), activeCases(0), negativeCases(0), positiveCases(0) {
}

CovidData::CovidData(unsigned int _day, unsigned int _month, unsigned int _year, unsigned int _activeCases, unsigned int _negativeCases, unsigned int _positiveCases)
    : day(_day), month(_month), year(_year), activeCases(_activeCases), negativeCases(_negativeCases), positiveCases(_positiveCases) {
}

CovidData::~CovidData() {
}



unsigned int CovidData::getDay() const {
    return day;
}

unsigned int CovidData::getMonth() const {
    return month;
}

unsigned int CovidData::getYear() const {
    return year;
}

unsigned int CovidData::getActiveCases() const {
    return activeCases;
}

double CovidData::positiveTestsShare() const {
    return (double) 100 * positiveCases / activeCases;
}


void CovidData::setActiveCases(const unsigned int activeCases) {
    this->activeCases = activeCases;
}



std::string CovidData::toString() const {
    std::stringstream ss;

    ss << day << ". " << month << ". " << year;
    ss << "\n Active cases: " << activeCases;
    ss << "\n Negative cases: " << negativeCases;
    ss << "\n Positive cases: " << positiveCases;
    ss << "\n Positive tests share: " << positiveTestsShare() << "%";

    return ss.str();
}
