#include <iostream>


bool is_deficient(const int input) {
    int sum = 0;

    for (int i = 1; i < input; i++) {
        if (input % i == 0)
            sum += i;
    }

    return sum < input;   // If sum < input then the number is deficient
}


bool is_prime(const int input) {
    for (int i = 2; i <= input / 2; i++) {
        if (input % i == 0) return false;
    }
    
    return true;
}


void print_primes(const int input) {
    std::cout << "Prastevila, ki so manjsa ali enaka stevilu " << input << ": ";

    for (int i = 2; i <= input; i++) {
        if (is_prime(i))
            std::cout << i << ", ";
    }
    std::cout << "\n";
}

void print_dividers(const int input) {
    std::cout << "Stevila, ki so delitelj stevila " << input << " so: ";
    for (int i = 1; i <= input; i++) {
        if (input % i == 0) 
            std::cout << i << ", ";
    }
    std::cout << "\n\n";
}


int main() {
    int input;

    do {
        std::cout << "Vnesite stevilo: ";
        std::cin >> input;
        print_primes(input);
        print_dividers(input);
    } while (is_deficient(input));

    std::cout << "Stevilo " << input << " ni nezadostno stevilo. ";
    std::cout << "Zato se je program zakljucil." << std::endl;


    return 0;
}
