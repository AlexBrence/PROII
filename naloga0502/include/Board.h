#pragma once

#include <string>
#include <vector>
#include "Category.h"
#include "DateTime.h"

class Board {
    private:
        std::string name;
        std::vector<Category> categories;

    public:
        Board(const std::string& name);

        void addCategory (const Category& category);
        bool addTask(const std::string& categoryName, Task* task);

        void agenda(const Date& date) const;
        void printCategories() const;
        void numberOfTasksInEachCategory() const;
        bool removeTask(const std::string& categoryName, const std::string& taskName);
        void printTasksBeforeDeadline(const DateTime& datetime) const;
        std::string toString() const;
};
