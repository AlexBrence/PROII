#include <sstream>
#include "ExpirationTask.h"

ExpirationTask::ExpirationTask(const std::string& name, const std::string& description, const DateTime& added,
                               const std::string& assignee, const DateTime& deadline, const std::string& state)
    : Task(name, description, added), assignee(assignee), deadline(deadline), state(state) {
}


bool ExpirationTask::isBeforeDeadline(const DateTime& deadline) const {
    if (this->deadline.isBefore(deadline)) {
        return true;
    }
    return false;
}


std::string ExpirationTask::toString() const {
    std::stringstream ss;

    ss << Task::toString()
       << assignee << "\n"
       << "[ " << deadline.toString() << " ]\n"
       << state;

    return ss.str();
}
