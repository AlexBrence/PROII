#pragma once

#include <map>
#include <string>
#include <vector>
#include "Task.h"

class Board {
    private:
        std::string name;
        std::map<std::string, Task*> tasks;

    public:
        Board(const std::string& name);
        ~Board();

        bool addTask(Task* task);
        Task* findTask(const std::string& key) const;
        void deleteTask(const std::string& key);
        std::map<std::string, Task*> getTasks() const;
        unsigned int numberOfTasks() const;
        bool changeTaskName(const std::string& from, const std::string& to);
        bool changeTask(const std::string &key, Task* task); 

        static std::vector<Task*> toVector(const Board& board);

        std::string toString() const;
};
