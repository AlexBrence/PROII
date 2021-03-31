#include <sstream>
#include "Category.h"

Category::Category(const std::string& name) 
    : name(name) {
}

Category::~Category() {
    for (const auto& t : tasks) {
        delete t;
    }
}

void Category::addTask(Task* task) {
    tasks.push_back(task);
}

std::string Category::getName() const {
    return name;
}

std::vector<Task*> Category::getTasks() const {
    return tasks;
}

int Category::getNumberOfTasks() const {
    return tasks.size();
}

bool Category::removeTask(Task* task) {
    for (size_t i = 0; i < tasks.size(); i++) {
        if (tasks[i] == task) {
            Task* tmp = tasks[i];
            tasks.erase(tasks.begin() + i);
            delete tmp;
            tmp = nullptr;
            return true;
        }
    }
    return false;
}

std::string Category::toString() const {
    std::stringstream ss;
    ss << name << "\n";
    for (const auto& t : tasks) {
        ss << t->toString() << "\n";
    }
    return ss.str();
}
