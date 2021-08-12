#include <iostream>

#include "Board.h"
#include "LocationTask.h"

void neuspesno() {
    std::cout << "Neuspesno dejanje\n";
}

int main() {
    Board board("March - April");

    if (!board.addTask(new Task("APS", "Binarno Iskalno Drevo", DateTime(Date(12, 3, 2021), Time(9, 0, 0))))) {
        neuspesno();
    }
    if (!board.addTask(new Task("PB", "SQL Skripta", DateTime(Date(20, 3, 2021), Time(13, 30, 0))))) {
        neuspesno();
    }
    if (!board.addTask(new Task("MAT", "Zaporedja", DateTime(Date(5, 3, 2021), Time(9, 55, 0))))) {
        neuspesno();
    }

    // ne bo dodalo APS
    if (!board.addTask(new ExpirationTask("APS", "Filmi", DateTime(Date(26, 3, 2021), Time(10, 30, 0)), "Nikola Popovic", DateTime(Date(8, 4, 2021), Time(23, 59, 0)), "DOING"))) {
        neuspesno();
    }
    if (!board.addTask(new ExpirationTask("PROII", "Dedovanje in Vsebovanje", DateTime(Date(26, 3, 2021), Time(21, 0, 0)), "Janez Novak", DateTime(Date(31, 3, 2021), Time(23, 59, 0)), "DOING"))) {
        neuspesno();
    }
    if (!board.addTask(new ExpirationTask("ARA", "Binarni Radix Sort", DateTime(Date(16, 3, 2021), Time(9, 0, 0)), "Alex Brence", DateTime(Date(31, 3, 2021), Time(23, 59, 0)), "DONE"))) { 
        neuspesno(); 
    }
    if (!board.addTask(new LocationTask("ANG", "How computers are made", DateTime(Date(26, 3, 2021), Time(9, 0, 0)), "Alex Brence", DateTime(Date(31, 3, 2021), Time(23, 59, 0)), "TODO", "Maribor"))) { 
        neuspesno(); 
    }
    if (!board.addTask(new LocationTask("NEM", "Denken wie ein SoftwareEntwickler", DateTime(Date(26, 3, 2021), Time(9, 0, 0)), "Alex Brence", DateTime(Date(31, 3, 2021), Time(23, 59, 0)), "TODO", "Ljubljana"))) { 
        neuspesno(); 
    }


    Task* tmp = board.findTask("NEM");
    std::cout << "***** FINDING TASK NEM\n" << ((tmp == nullptr) ? " not found" : tmp->toString())
              << "\nNUMBER OF TASKS: " << board.numberOfTasks() << "\n\n";

    // ne bo najdlo NEM2
    tmp = board.findTask("NEM2");
    std::cout << "***** FINDING TASK NEM2\n" << ((tmp == nullptr) ? " not found" : tmp->toString()) << "\n\n";


    board.deleteTask("NEM");
    tmp = board.findTask("NEM");
    std::cout << "***** FINDING TASK NEM(after deletion)\n" << ((tmp == nullptr) ? " not found" : tmp->toString())
              << "\nNUMBER OF TASKS: " << board.numberOfTasks() << "\n\n";


    std::vector<Task*> tasksVector = Board::toVector(board);
    for (const auto& task : tasksVector) {
        std::cout << task->toString() << "\n\n";
    }


    tmp = board.findTask("PROII");
    std::cout << "***** FINDING TASK PROII\n" << ((tmp == nullptr) ? " not found" : tmp->toString()) << "\n\n";

    std::cout << "***** CHANGING TASK NAME from PROII to PRO2\n"; 
    if (!board.changeTaskName("PROII", "PRO2")) {
        neuspesno();
    }
    tmp = board.findTask("PROII");
    std::cout << "***** FINDING TASK PROII(after changing name)\n" << ((tmp == nullptr) ? " not found" : tmp->toString()) << "\n\n";

    tmp = board.findTask("PRO2");
    std::cout << "***** FINDING TASK PRO2\n" << ((tmp == nullptr) ? " not found" : tmp->toString()) << "\n\n";

    board.changeTask("PRO2", new Task("UPO", "Uporabniska Programska Oprema", DateTime(Date(26, 3, 2021), Time(9, 0, 0))));
    tmp = board.findTask("UPO");
    std::cout << "***** CHANGING TASK from PRO2 to UPO\n" << ((tmp == nullptr) ? " not found" : tmp->toString()) << "\n\n";


    return 0;
}
