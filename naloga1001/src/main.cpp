#include <iostream>
#include <memory>

#include "Date.h"
#include "SmartPointer.h"


std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << date.toString();
    return out;
}


int main() {

    SmartPointer<Date> date1(new Date(10, 10, 2000));
    SmartPointer<Date> date2(new Date(31, 12, 1998));
    SmartPointer<Date> date3(new Date(31, 3, 2001));
    SmartPointer<Date> date4(new Date(10, 10, 2000));

    std::cout << "Date 1: " << *date1 << std::endl;

    const bool is_same = (*date1 == *date4);
    std::cout << *date1 << " and " << *date4 << " are same: " << (is_same ? "true\n" : "false\n");

    std::cout << "Adding a day to " << *date2 << "(prefix): " << ++(*date2) << std::endl;
    *date1 = (*date1)++;

    std::cout << *date1 << std::endl;

    std::shared_ptr<Date> sp_date = std::make_shared<Date>(25, 5, 2021);
    std::cout << (*sp_date)++.toString() << std::endl;
    std::cout << (++*sp_date).toString() << std::endl;

    return 0;
}
