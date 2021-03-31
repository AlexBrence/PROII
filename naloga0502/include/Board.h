#pragma once

#include <string>
#include <vector>
#include "Category.h"

class Board {
    private:
        std::string name;
        std::vector<Category> categories;

    public:
        Board(const std::string& name);

        void addCategory (const Category& category);
        bool addTask(const std::string& categoryName, Task* task);
        // std::vector<Category> getCategories() const;

        void agenda(const Date& date) const;
        void printCategories() const;
        void numberOfTasksInEachCategory() const;
        bool removeTask(const std::string& categoryName, const std::string& taskName);
        std::string toString() const;
};
