#include "Board.h"
#include <sstream>

Board::Board(const std::string& name) 
    : name(name) {
}

Board::~Board() {
    for (const auto& t : tasks) {
        delete t;
    }
}

void Board::addTask(Task *task) {
    tasks.push_back(task);
}

std::string Board::toString() const {
    std::stringstream ss;

    ss << name << "\n";
    for (const auto& t : tasks) {
        ss << t->toString() << "\n\n";
    }

    return ss.str();
}
