#pragma once

#include <string>

class Date {
    private:
        int day;
        int month;
        int year;

    public:
        Date();
        Date(const int& day, const int& month, const int& year);
        Date(const Date& d);
        ~Date();

        int getDay() const;
        int getMonth() const;
        int getYear() const;

        void setDay(const int& day);
        void setMonth(const int& month);
        void setYear(const int& year);

        std::string toString() const;

        friend std::ostream& operator<<(std::ostream& out, const Date& date);
        bool operator==(const Date& other) const;
        Date& operator++();
        Date operator++(int dummy);
};
