#pragma once


#include <string>
#include <vector>
#include "Task.h"

class Category {
    private:
        std::string name;
        std::vector<Task*> tasks;

    public:
        Category(const std::string& name);
        ~Category();

        std::string getName() const;
        std::vector<Task*> getTasks() const;
        int getNumberOfTasks() const;

        void addTask(Task* task);
        bool removeTask(Task* task);
        std::string toString() const;
};


