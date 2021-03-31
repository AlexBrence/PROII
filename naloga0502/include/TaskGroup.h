#pragma once

#include <vector>
#include <string>
#include "Task.h"

class TaskGroup : public Task {
    private:
        std::vector<Task*> tasks;

    public:
        TaskGroup(std::vector<Task*> tasksVec);
        ~TaskGroup();

        std::string toString() const override;
};


