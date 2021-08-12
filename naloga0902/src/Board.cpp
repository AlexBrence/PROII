#include "Board.h"
#include <sstream>
#include <vector>

Board::Board(const std::string& name) 
    : name(name) {
}

Board::~Board() {
    for (const auto& t : tasks) {
        delete t.second;
    }
}

bool Board::addTask(Task *task) {
    const std::string name = task->getName();
    if (tasks[name]) {
        return false;
    }

    tasks[name] = task;
    return true;
}

Task* Board::findTask(const std::string& key) const {
    auto pos = tasks.find(key);
    if (pos == tasks.end()) {
        return nullptr;
    }
    return pos->second;
}

void Board::deleteTask(const std::string& key) {
    Task* tmp = tasks[key];
    delete tmp;
    tasks.erase(key);
}

std::map<std::string, Task*> Board::getTasks() const {
    return tasks;
}

unsigned int Board::numberOfTasks() const {
    return tasks.size();
}


bool Board::changeTaskName(const std::string& from, const std::string& to) {
    if (!findTask(from)) return false;

    auto nodeHandler = tasks.extract(from);
    nodeHandler.key() = to;
    tasks.insert(std::move(nodeHandler));
    return true;
}

bool Board::changeTask(const std::string &key, Task* task) {
    if (!findTask(key)) return false;
    deleteTask(key);
    addTask(task);
    return true;
}


std::vector<Task*> Board::toVector(const Board& board) {
    std::map<std::string, Task*> tasks = board.getTasks();
    std::vector<Task*> tasksVector;
    tasksVector.reserve(board.numberOfTasks());

    for (std::map<std::string, Task*>::iterator it = tasks.begin(); it != tasks.end(); it++) {
        tasksVector.push_back(it->second);
    }

    return tasksVector;
}


std::string Board::toString() const {
    std::stringstream ss;

    ss << name << "\n";
    for (const auto& t : tasks) {
        ss << t.second->toString() << "\n\n";
    }
    return ss.str();
}
