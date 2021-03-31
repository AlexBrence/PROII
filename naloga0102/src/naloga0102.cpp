#include <ctime>
#include <iostream>

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

void fillArray(unsigned int* array, const unsigned int size) {
    for (unsigned int i = 0; i < size; i++) {
        array[i] = 1000 + rand() % 4001;
    }
}

void printArray(const unsigned int* array, const unsigned int size) {
    for (unsigned int i = 0; i < size; i++) {
        cout << ((i > 0) ? ", " : "") << array[i];
    }
    cout << "." << endl;
}

int getAverage(const unsigned int* array, const unsigned int size) {
    int sum = 0;
    for (unsigned int i = 0; i < size; i++) {
        sum += array[i];
    }
    
    return sum / size;
}


int getAboveAverage(const unsigned int* array, const unsigned int size) {
    const int average = getAverage(array, size);
    int days_above_average = 0;

    for (unsigned int i = 0; i < size; i++) {
        if (array[i] > average) 
            days_above_average++;
    }

    return days_above_average;
}

void printAboveAveragePercentage(const unsigned int* array, const unsigned int size) {
    int days_above_average = getAboveAverage(array, size);
    const int percentage = days_above_average * 100 / size;

    cout << "Percentage of days above average: " << percentage << "%" << endl;
}


void printArrayInSections(const unsigned int* array, const unsigned int size) {
    int sections[4] = {0};
    
    for (unsigned int i = 0; i < size; i++) {
        if (array[i] == 5000) sections[3]++;
        else sections[array[i]/1000 - 1]++;
    }

    cout << "Number of days between 1000-1999: " << sections[0];
    cout << "\nNumber of days between 2000-2999: " << sections[1];
    cout << "\nNumber of days between 3000-3999: " << sections[2];
    cout << "\nNumber of days between 4000-5000: " << sections[3];
    cout << endl;
}

void printMax(const unsigned int* array, const unsigned int size) {
    int max = 0;

    for (unsigned int i = 0; i < size; i++) {
        (array[i] > max ? max = array[i] : i);
    }

    cout << "\nMax active cases: " << max << endl;
}


int main() {
    const unsigned int days = 30;
    unsigned int* activeCases = new unsigned int[days];

    srand(time(nullptr));

    bool running = true;
    int selection;

    do {
        menu();
        cin >> selection;
        switch (selection) {
            case 1:
                fillArray(activeCases, days);
                break;
            case 2:
                printArray(activeCases, days);
                break;
            case 3:
                cout << "Average: " << getAverage(activeCases, days) << endl;
            case 4:
                cout << "Number of days above average: " << getAboveAverage(activeCases, days) << endl;
                break;
            case 5:
                printAboveAveragePercentage(activeCases, days);
                break;
            case 6:
                printArrayInSections(activeCases, days);
                break;
            case 7:
                printMax(activeCases, days);
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

    delete[] activeCases;

    return 0;
}
