#pragma once

#include <vector>
#include <string>
#include "Task.h"

class TaskGroup : public Task {
    private:
        std::vector<Task*> tasks;

    public:
        TaskGroup(const std::vector<Task*>& tasksVec);

        DateTime getDateTime() const override {};
        std::string getName() const override {};
        std::string toString() const override;
};


