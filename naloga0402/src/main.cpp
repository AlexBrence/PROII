#include <iostream>
#include <random>
#include <vector>

#include "Athlete.h"
#include "Competition.h"
#include "DateTime.h"



int main() {
    // Some stuff to make constructing new objects easier
    std::random_device rd;
    std::uniform_real_distribution<double> randomResultSeconds(10.0, 12.0);
    std::uniform_real_distribution<double> randomResultMinutes(5.0, 20.0);
    std::uniform_real_distribution<double> randomHeight(165.0, 200.0);
    std::uniform_real_distribution<double> randomWeight(60.0, 85.0);
    std::uniform_int_distribution<int> randomPersonalInfo(0, 9);
    const std::vector<std::string> names = {"Janko", "Milenko", "Ziga", "Matic", "Nikola", "Niko", "Joojo", "Davor", "Miso", "Svit"};
    const std::vector<std::string> surnames = {"Brzi", "JosBrzi", "NajBrzi", "Schnitzel", "Popovic", "Kuuku", "Marquez", "Rossi", "Kelc", "Prco"};
    const std::vector<std::string> countries = {"Ghana", "Serbia", "Montenegro", "Germany", "Austria", "Nederlands", "Italy", "Spain", "France", "Portugal"};

    // Creating competitions
    std::vector<Competition*> competitions = {new Competition("Athletic Diamond League, 100m run", DateTime("09/06/2020 09:00:00"), DateTime("16/06/2020 19:10:00")),
                                              new Competition("Athletic Diamond League, 3000m run", DateTime("13/06/2020 10:30:00"), DateTime("20/06/2020 20:00:00")),
                                              new Competition("Athletic Diamond League, 10.000m run", DateTime("18/06/2020 12:15:00"), DateTime("25/06/2020 20:00:00"))};


    // Add 6 competitors in the first competition
    for (int i = 0; i < 6; i++) {
        competitions[0]->addCompetitor(new Athlete(names[randomPersonalInfo(rd)], surnames[randomPersonalInfo(rd)], 
                    countries[randomPersonalInfo(rd)], randomHeight(rd), randomWeight(rd)));
    }


    // Add same athletes form 1st competition to other 2 competitions
    std::vector<Competitor> competitors = competitions[0]->getCompetitors();

    for (size_t i = 1; i < competitions.size(); i++) {
        for (const auto& c : competitors) {
            Athlete* a = c.getAthlete();
            competitions[i]->addCompetitor(a);
        }
    }


    // The races end here
    for (const auto& c : competitions) {
        for (int i = 0; i < 6; i++) {

            // Each competitor has 3 results
            c->addResult(i + 1, Result(randomResultSeconds(rd), "sec"));
            c->addResult(i + 1, Result(randomResultMinutes(rd), "min"));
            c->addResult(i + 1, Result(randomResultMinutes(rd), "min"));
        }
    }

    // Get competitions between certain date
    std::cout << "/***** competitionsBetweenDate method *****/\n\n";
    std::vector<Competition*> competitionsBetweenDate;
    competitionsBetweenDate = Competition::getCompetitionsBetween(competitions, DateTime("13/06/2020 09:00:00"), DateTime("25/06/2020 19:00:00"));
    for (const auto& c : competitionsBetweenDate) {
        std::cout << c->toString() << "\n";
    }



    // Delete the athletes
    for (const auto& c : competitors)
        delete c.getAthlete();
    }
    return 0;
}
