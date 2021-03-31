#pragma once

#include <string>
#include <vector>
#include "Task.h"

class Board {
    private:
        std::string name;
        std::vector<Task*> tasks;

    public:
        Board(const std::string& name);
        ~Board();

        void addTask(Task* task);
        std::string toString() const;
};
