#pragma once

#include <vector>
#include <string>
#include "Task.h"

class TaskGroup : public Task {
    private:
        std::vector<Task*> tasks;

    public:
        TaskGroup(const std::vector<Task*>& tasksVec);

        bool isBeforeDeadline(const DateTime& deadline) const override { return false; }
        std::string toString() const override;
};


