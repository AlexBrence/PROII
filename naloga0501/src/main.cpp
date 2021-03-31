#include <iostream>

#include "Board.h"
#include "LocationTask.h"

int main() {
    Board board("March - April");

    board.addTask(new Task("APS", "Binarno Iskalno Drevo", DateTime(Date(12, 3, 2021), Time(9, 0, 0))));
    board.addTask(new Task("PB", "SQL Skripta", DateTime(Date(20, 3, 2021), Time(13, 30, 0))));
    board.addTask(new Task("MAT", "Funkcije in Lastnosti F.", DateTime(Date(1, 3, 2021), Time(9, 55, 0))));
    board.addTask(new Task("MAT", "Zaporedja", DateTime(Date(5, 3, 2021), Time(9, 55, 0))));
    board.addTask(new ExpirationTask("APS", "Filmi", DateTime(Date(26, 3, 2021), Time(10, 30, 0)), "Nikola Popovic", DateTime(Date(8, 4, 2021), Time(23, 59, 0)), "DOING"));
    board.addTask(new ExpirationTask("PROII", "Dedovanje in Vsebovanje", DateTime(Date(26, 3, 2021), Time(21, 0, 0)), "Janez Novak", DateTime(Date(31, 3, 2021), Time(23, 59, 0)), "DOING"));
    board.addTask(new ExpirationTask("ARA", "Binarni Radix Sort", DateTime(Date(16, 3, 2021), Time(9, 0, 0)), "Alex Brence", DateTime(Date(31, 3, 2021), Time(23, 59, 0)), "DONE"));
    board.addTask(new ExpirationTask("PB", "SQL Povprasevanja", DateTime(Date(26, 3, 2021), Time(13, 0, 0)), "Jakob Veniger", DateTime(Date(15, 4, 2021), Time(23, 59, 0)), "TODO"));
    board.addTask(new ExpirationTask("ARA", "Quick Sort", DateTime(Date(26, 3, 2021), Time(9, 0, 0)), "Alex Brence", DateTime(Date(31, 3, 2021), Time(23, 59, 0)), "TODO"));
    board.addTask(new LocationTask("ANG", "How computers are made", DateTime(Date(26, 3, 2021), Time(9, 0, 0)), "Alex Brence", DateTime(Date(31, 3, 2021), Time(23, 59, 0)), "TODO", "Maribor"));
    board.addTask(new LocationTask("NEM", "Denken wie ein SoftwareEntwickler", DateTime(Date(26, 3, 2021), Time(9, 0, 0)), "Alex Brence", DateTime(Date(31, 3, 2021), Time(23, 59, 0)), "TODO", "Ljubljana"));

    std::cout << "/***** BOARD TOSTRING *****/\n"
              << board.toString() << std::endl;


    return 0;
}
