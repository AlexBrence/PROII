#pragma once

#include <string>

class Result {
    private:
        double result;
        std::string unit;

    public:
        Result(double result, std::string unit);

        void setResult(const double result);
        void setUnit(const std::string& unit);
        double getResult() const;
        std::string getUnit() const;
        std::string toString() const;
};


