#include <sstream>

#include "Task.h"

Task::Task() : added(added) {
}

Task::Task(const std::string& name, const std::string& description, const DateTime& added)
    : name(name), description(description), added(added) {
}


