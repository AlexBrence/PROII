#include "TaskGroup.h"
#include "Category.h"
#include "DateTime.h"
#include <sstream>


TaskGroup::TaskGroup(const std::vector<Task*>& tasksVector) {
    tasks = std::move(tasksVector);
}


std::string TaskGroup::toString() const {
    std::stringstream ss;

    for (const auto& t : tasks) {
        ss << t->toString() << "\n\n";
    }

    return ss.str();
}
