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

        void addTask(Task* task);
        std::string getName() const;
        std::vector<Task*> getTasks() const;
        int getNumberOfTasks() const;
        bool removeTask(Task* task);
        std::string toString() const;
};


