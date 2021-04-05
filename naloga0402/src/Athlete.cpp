#include <iostream>
#include <sstream>

#include "Athlete.h"


// Athlete::Athlete() 
//     : firstName("None"), lastName("None"), country("None"), height(0.0), weight(0.0) {
// }

Athlete::Athlete(const std::string& firstName, const std::string& lastName, const std::string& country, const double height, const double weight) 
    : firstName(firstName), lastName(lastName), country(country), height(height), weight(weight) {
}

