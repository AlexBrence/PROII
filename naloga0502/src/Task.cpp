#include <sstream>

#include "Task.h"

Task::Task() : added(added) {
}

Task::Task(const std::string& name, const std::string& description, const DateTime& added)
    : name(name), description(description), added(added) {
}


std::string Task::getName() const {
    return name;
}


DateTime Task::getDateTime() const {
    return added;
}


std::string Task::toString() const {
    std::stringstream ss;

    ss << "-> " << name << "\n"
       << description << "\n"
       << "[ " << added.toString() << " ]\n";

    return ss.str();
}
