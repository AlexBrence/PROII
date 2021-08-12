#include <sstream>

#include "LocationTask.h"
#include "ExpirationTask.h"

LocationTask::LocationTask(const std::string& name, const std::string& description, const DateTime& added,
                           const std::string& assignee, const DateTime& deadline, const std::string& state,
                           const std::string& location) 
    : ExpirationTask(name, description, added, assignee, deadline, state), location(location) {
}



std::string LocationTask::toString() const {
    std::stringstream ss;

    ss << ExpirationTask::toString() 
       << "\nLocation: " << location;

    return ss.str();
}
