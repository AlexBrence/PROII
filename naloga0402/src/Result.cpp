#include <sstream>

#include "Result.h"


Result::Result(double result, std::string unit) : result(result), unit(unit) {
}


void Result::setResult(const double result) {
    this->result = result;
}
 
void Result::setUnit(const std::string& unit) {
    this->unit = unit;
}

double Result::getResult() const {
    return result;
}

std::string Result::getUnit() const {
    return unit;
}

std::string Result::toString() const {
    std::stringstream ss;

    ss << result << " " 
       << unit;

    return ss.str();
}
