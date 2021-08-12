#include <sstream>

#include "Task.h"

Task::Task(const std::string& name, const std::string& description, const DateTime& added)
    : name(name), description(description), added(added) {
}

std::string Task::getName() const {
    return name;
}

void Task::setName(const std::string& name) {
    this->name = name;
}

std::string Task::toString() const {
    std::stringstream ss;

    ss << "-> " << name << "\n" 
       << description << "\n"
       << "[ " << added.toString() << " ]";

    return ss.str();
}
