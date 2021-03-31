#include "TaskGroup.h"
#include "Category.h"
#include <sstream>


TaskGroup::TaskGroup(std::vector<Task*> tasksVector) {
    for (const auto& tv : tasksVector) {
        tasks.push_back(tv);
    }
}

TaskGroup::~TaskGroup() {
}

std::string TaskGroup::toString() const {
    std::stringstream ss;

    for (const auto& t : tasks) {
        ss << t->toString() << "\n\n";
    }

    return ss.str();
}
