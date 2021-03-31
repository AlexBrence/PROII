#include <sstream>

#include "Task.h"

Task::Task() : added(added) {
}

Task::Task(const std::string& name, const std::string& description, const DateTime& added)
    : name(name), description(description), added(added) {
}


Task::~Task() {
}

DateTime Task::getDateTime() const {
    return added;
}

std::string Task::getName() const {
    return name;
}


std::string Task::toString() const {
    std::stringstream ss;

    ss << "-> " << name << "\n" 
       << description << "\n"
       << "[ " << added.toString() << " ]";

    return ss.str();
}
