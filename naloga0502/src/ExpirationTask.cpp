#include <sstream>
#include "ExpirationTask.h"

ExpirationTask::ExpirationTask(const std::string& name, const std::string& description, const DateTime& added,
                               const std::string& assignee, const DateTime& deadline, const std::string& state)
    : Task(name, description, added), assignee(assignee), deadline(deadline), state(state) {
}


std::string ExpirationTask::getName() const {
    return name;
}


DateTime ExpirationTask::getDateTime() const {
    return Task::added;
}

std::string ExpirationTask::toString() const {
    std::stringstream ss;

    ss << "-> " << name << "\n"
       << description << "\n"
       << "[ " << added.toString() << " ]\n"
       << assignee << "\n"
       << "[ " << deadline.toString() << " ]\n"
       << state;

    return ss.str();
}
