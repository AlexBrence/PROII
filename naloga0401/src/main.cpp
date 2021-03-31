#include <iostream>
#include <random>
#include <vector>

#include "Athlete.h"
#include "Competitor.h"
#include "Competition.h"



int main() {
    std::random_device rd;
    std::uniform_real_distribution<double> dist(10.0, 12.0);

    Athlete* a1 = new Athlete("Janko", "Brzi", "Crna gora", 183.0, 73.4);
    Athlete* a2 = new Athlete("Milenko", "JosBrzi", "Makedonija", 173.0, 65.4);
    Athlete* a3 = new Athlete("Ziga", "NajBrzi", "Slovenija", 185.2, 76.9);
    Athlete* a4 = new Athlete("Matic", "Schnitzel", "Nemcija", 193.0, 79.2);
    Athlete* a5 = new Athlete("Niko", "Popovic", "Srbija", 190.3, 81.2);
    Athlete* a6 = new Athlete("Joojo", "Kuuku", "Gana", 195.3, 79.9);

    Competition competition("Athletic Diamont League, 100m run", Date(9, 6, 2021));
    competition.addCompetitor(a1);
    competition.addCompetitor(a2);
    competition.addCompetitor(a3);
    competition.addCompetitor(a4);
    competition.addCompetitor(a5);
    competition.addCompetitor(a6);


    // The 100m race ends here
    for (int i = 0; i < 6; i++) {
        competition.addResult(i + 1, dist(rd));
    }

    std::cout << "/***** Competition Info *****/\n\n";
    std::cout << competition.toString() << std::endl;


    // Filter competitors by result
    double limit = 11.0;
    std::vector<Competitor> qualifiedCompetitors = competition.getQualifiedCompetitors(limit);


    // Qualified competitors will bi printed out here
    std::cout << "\n/***** After the race *****/\n";
    std::cout << "\n=== Qualified Competitors (under " << limit << " seconds) ===\n";
    for (const auto& qf : qualifiedCompetitors) {
        std::cout << qf.toString() << "\n\n";
    }


    // Competition winner 
    Competitor* winner = competition.getCompetitionWinner();
    std::cout << "***** AAAnd the winner is *****\n" << winner->toString() << "\n\n";


    delete a1;
    delete a2;
    delete a3;
    delete a4;
    delete a5;
    delete a6;


    return 0;
}
