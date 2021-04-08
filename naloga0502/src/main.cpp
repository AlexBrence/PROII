#include <iostream>

#include "Board.h"
#include "Category.h"
#include "DateTime.h"
#include "ExpirationTask.h"
#include "TaskGroup.h"


void napaka() {
    std::cout << "***** NAPAKA: Ta kategorija ne obstaja!\n\n";
}

int main() {
    Board board("March - April");

    board.addCategory(Category("APS"));
    board.addCategory(Category("PROII"));
    board.addCategory(Category("ARA"));
    board.addCategory(Category("PB"));
    board.addCategory(Category("MAT"));

    // Tu bo napaka
    if(!board.addTask("Algoritmi", new ExpirationTask("Vaja 4 - Binarno Iskalno Drevo", "Implementiraj svoje binarno iskalno drevo ter potrebne funkcije.", DateTime("12/03/2021 09:00:00"), 
                                                      "Dragana Bozovic", DateTime("24/4/2021 19:00:00"), "TODO"))) {
        napaka();
    };

    // Tu naprej je ok
    if(!board.addTask("APS", new ExpirationTask("Vaja 4 - Binarno Iskalno Drevo", "Implementiraj svoje binarno iskalno drevo ter potrebne funkcije.", DateTime("12/03/2021 09:00:00"), 
                                                "Kaja Kelc", DateTime("15/4/2021 12:00"), "DONE"))) {
        napaka();
    };

    if(!board.addTask("APS", new ExpirationTask("Vaja 5 - Filmi", "V skladu z navodili implementirajte nadgradnjo prejšnje vaje, tako da omogoča hrambo imen filmov znotraj binarnih iskalnih dreves glede na datum izdaje.", 
                                                DateTime("26/03/2021 10:30:00"), "Nikola Popovic", DateTime("08/04/2021 23:59:00"), "DOING"))) {
        napaka();
    }


    if(!board.addTask("PROII", new ExpirationTask("Naloga 5.1 - Dedovanje in Vsebovanje", "Poglej si primere od profesorja ter implemetiraj zahtevane razrede na enak nacin.", DateTime("26/03/2021 21:00:00"),
                                                  "Janez Novak", DateTime("31/03/2021 23:59:00"), "DOING"))) {
        napaka();
    }


    if(!board.addTask("ARA", new ExpirationTask("Vaja 3 - Binarni Radix Sort", "Implementiraj binarni radix sort, za sortitanje uporabi Counting sort.", DateTime("16/03/2021 09:00:00"),
                                                "Alex Brence", DateTime("30/03/2021 23:59:00"), "DONE"))) {
        napaka();
    }
    if(!board.addTask("ARA", new ExpirationTask("Vaja 4 - Quick Sort", "Implementiraj hitro urejanje brez pomoci knjiznic.", DateTime("26/03/2021 09:00:00"), 
                                                "Alex Brence", DateTime("31/03/2021 23:59:00"), "TODO"))) {
        napaka();
    }


    if(!board.addTask("PB", new ExpirationTask("Vaja 2 - SQL Skripta", "Rocno pretvori E-R Model v skripto.", DateTime("20/03/2021 13:30:00"), 
                                               "Tin Kelc", DateTime("20/4/2021 11:11:00"), "TODO"))) {
        napaka();
    }
    if(!board.addTask("PB", new ExpirationTask("Vaja 3 - SQL Povprasevanja", "Iz skripte zdaj s pomocjo 6-ih SQL vprasanj pridobi potrebne podatke.", DateTime("26/03/2021 13:00:00"), 
                                               "Jakob Veniger", DateTime("15/04/2021 23:59:00"), "TODO"))) {
        napaka();
    }

    if(!board.addTask("MAT", new ExpirationTask("Sklop 2 - Funkcije in Lastnosti Funkcij", "Resi vse primere iz tega sklopa.", DateTime("01/03/2021 09:55:00"), 
                                                "Alex Brence", DateTime("12/5/2021 22:00:00"), "DOING"))) {
        napaka();
    }
    if(!board.addTask("MAT", new ExpirationTask("Sklop 3 - Zaporedja", "Resi vse primere iz tega sklopa ter dodatne naloga iz prejsnjih kolokvijev.", DateTime("05/03/2021 09:55:00"), 
                                                "Primoz Peterka", DateTime("19/6/2021 12:00:00"), "DOING"))) {
        napaka();
    }




    // Agenda method
    Date date(26, 3, 2021);
    std::cout << "/***** Tasks on given date " << date.toString() << " *****/\n";
    board.agenda(date);


    // Print all categories
    board.printCategories();

    // Count number of tasks in each category
    std::cout << "------------------------------------------\n";
    std::cout << "Number of tasks in each category: ";
    board.numberOfTasksInEachCategory();

    // Remove a task
    std::cout << "------------------------------------------\n";
    std::cout << "\nAfter deleting a task in MAT category\n";
    if (!board.removeTask("MAT", "Sklop 2 - Funkcije in Lastnosti Funkcij")) {
        napaka();
    }

    // Count number of tasks in each category
    std::cout << "------------------------------------------\n";
    std::cout << "Number of tasks in each category: ";
    board.numberOfTasksInEachCategory();

    DateTime deadline("15/4/2021 23:59:59");
    std::cout << "------------------------------------------\n";
    std::cout << "\n\nTasks before deadline " << deadline.toString() << "\n";
    board.printTasksBeforeDeadline(deadline);



    std::vector<Task*> tasks;
    tasks.emplace_back(new ExpirationTask("Vaja 3 - SQL Povprasevanja", "Iz skripte zdaj s pomocjo 6-ih SQL vprasanj pridobi potrebne podatke.", DateTime("26/03/2021 13:00:00"), "Jakob Veniger", DateTime("15/04/2021 23:59:00"), "TODO"));
    tasks.emplace_back(new ExpirationTask("Sklop 2 - Funkcije in Lastnosti Funkcij", "Resi vse primere iz tega sklopa.", DateTime("01/03/2021 09:55:00"), "Alex Brence", DateTime("12/5/2021 22:00:00"), "DOING"));
    tasks.emplace_back(new ExpirationTask("Sklop 3 - Zaporedja", "Resi vse primere iz tega sklopa ter dodatne naloga iz prejsnjih kolokvijev.", DateTime("05/03/2021 09:55:00"), "Primoz Peterka", DateTime("19/6/2021 12:00:00"), "DOING"));

    TaskGroup *importantTasks = new TaskGroup(tasks);

    board.addCategory(Category("IMPORTANT"));
    board.addTask("IMPORTANT", importantTasks);
    std::cout << "------------------------------------------\n";
    std::cout << board.toString() << std::endl;


    return 0;
}
