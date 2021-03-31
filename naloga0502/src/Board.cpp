#include "Board.h"
#include <sstream>
#include <iostream>

Board::Board(const std::string& name) 
    : name(name) {
}

void Board::addCategory(const Category& category) {
    categories.push_back(category);
}

bool Board::addTask(const std::string& categoryName, Task *task) {
    for (auto& c : categories) {
        if (c.getName() == categoryName) {
            c.addTask(task);
            return true;
        }
    }
    return false;
}

// std::vector<Category> Board::getCategories () const {
//     return categories;
// }

void Board::agenda(const Date& date) const {
    std::vector<Task*> tasks;

    for (const auto& c : categories) {
        tasks = c.getTasks();
        for (const auto& t : tasks) {
            if (date.isEqual(t->getDateTime().getDate())) {
                std::cout << t->toString() << "\n\n";
            }
        }
    }  
}

void Board::printCategories() const {
    std::cout << "Categories: ";
    for (const auto& c : categories) {
        std::cout << c.getName() << ((&c == &categories[categories.size() - 1]) ? ".\n"  : ", ");
    }
}


void Board::numberOfTasksInEachCategory() const {
    for (const auto& c : categories) {
        int number = 0;
        number += c.getNumberOfTasks();
        std::cout << c.getName() << "(" << number << ")" <<
            ((&c == &categories[categories.size() - 1]) ? ".\n"  : ", ");
    }
}

bool Board::removeTask(const std::string& categoryName, const std::string& taskName) {
    std::vector<Task*> tasks;

    for (auto& c : categories) {
        if (c.getName() == categoryName) {
            tasks = c.getTasks();
            for (auto& t : tasks) {
                if (t->getName() == taskName) {
                    if (c.removeTask(t)) {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}


std::string Board::toString() const {
    std::stringstream ss;

    ss << name << "\n\n";
    for (const auto& c : categories) {
        ss << c.toString() << "\n\n";
    }

    return ss.str();
}
