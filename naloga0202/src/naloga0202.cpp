#include <ctime>
#include <iostream>
#include <vector>

#include "CovidData.h"


using namespace std;

void menu() {
    cout << "============================" << endl;
    cout << "=========== MENU ===========" << endl;
    cout << "============================" << endl;
    cout << "1 ... GENERATE ACTIVE CASES" << endl;
    cout << "2 ... PRINT ACTIVE CASES" << endl;
    cout << "3 ... PRINT ACTIVE CASES AVERAGE" << endl;
    cout << "4 ... PRINT DAYS OF ACTIVE CASES ABOVE AVERAGE" << endl;
    cout << "5 ... PRINT DAYS OF ACTIVE CASES ABOVE AVERAGE IN PERCENTAGE" << endl;
    cout << "6 ... PRINT DAYS OF ACTIVE CASES IN SECTIONS" << endl;
    cout << "7 ... PRINT ACTIVE CASES MAXIMUM" << endl;
    cout << "0 ... EXIT" << endl;
    cout << "============================" << endl;
    cout << "Select: ";
}

void fillArray(std::vector<CovidData*>& covidStats, const unsigned int size) {

    for (unsigned int i = 0; i < size; i++) {
        unsigned int randomActiveCases = 1000 + rand() % 4001;
        unsigned int randomPositives = rand() % randomActiveCases;
        unsigned int negatives = randomActiveCases - randomPositives;

        covidStats.push_back(new CovidData(i + 1, 4, 2020, randomActiveCases, negatives, randomPositives));
    }
}

void printArray(const std::vector<CovidData*>& covidStats) {
    for (unsigned int i = 0; i < covidStats.size(); i++) {
        cout << covidStats[i]->toString() << "\n\n";
    }
}

int getAverage(const std::vector<CovidData*>& covidStats) {
    int sum = 0;

    for (unsigned int i = 0; i < covidStats.size(); i++) {
        sum += covidStats[i]->getActiveCases();
    }
    
    return sum / covidStats.size();
}


int getAboveAverage(const std::vector<CovidData*>& covidStats) {
    const int average = getAverage(covidStats);
    int days_above_average = 0;

    for (unsigned int i = 0; i < covidStats.size(); i++) {
        if (covidStats[i]->getActiveCases() > average) 
            days_above_average++;
    }

    return days_above_average;
}

void printAboveAveragePercentage(const std::vector<CovidData*>& covidStats) {
    int days_above_average = getAboveAverage(covidStats);
    const double percentage = (double) days_above_average * 100 / covidStats.size();

    cout << "Percentage of days above average: " << percentage << "%" << endl;
}


void printArrayInSections(const std::vector<CovidData*>& covidStats) {
    int sections[4] = {0};
    
    for (unsigned int i = 0; i < covidStats.size(); i++) {
        if (covidStats[i]->getActiveCases() == 5000) sections[3]++;
        else sections[covidStats[i]->getActiveCases()/1000 - 1]++;
    }

    cout << "Number of days between 1000-1999: " << sections[0];
    cout << "\nNumber of days between 2000-2999: " << sections[1];
    cout << "\nNumber of days between 3000-3999: " << sections[2];
    cout << "\nNumber of days between 4000-5000: " << sections[3];
    cout << endl;
}

void printMax(const std::vector<CovidData*>& covidStats) {
    int max = 0;

    for (unsigned int i = 0; i < covidStats.size(); i++) {
        if (covidStats[i]->getActiveCases() > max) {
            max = covidStats[i]->getActiveCases();
        }
    }

    cout << "\nMax active cases: " << max << endl;
}


int main() {
    const unsigned int days = 30;
    std::vector<CovidData*> covidStats;

    srand(time(nullptr));

    bool running = true;
    int selection;

    do {
        menu();
        cin >> selection;
        switch (selection) {
            case 1:
                fillArray(covidStats, days);
                break;
            case 2:
                printArray(covidStats);
                break;
            case 3:
                cout << "Average: " << getAverage(covidStats) << endl;
                break;
            case 4:
                cout << "Number of days above average: " << getAboveAverage(covidStats) << endl;
                break;
            case 5:
                printAboveAveragePercentage(covidStats);
                break;
            case 6:
                printArrayInSections(covidStats);
                break;
            case 7:
                printMax(covidStats);
                break;
            case 0:
                running = false;
                break;
            default:
                cout << "Wrong selection!" << endl;
                break;
        }
        cout << endl;
    } while (running);


    for (auto c : covidStats) {
        delete c;
    }

    return 0;
}
