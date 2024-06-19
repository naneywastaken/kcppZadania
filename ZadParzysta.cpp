/** 4.4
  * \author: Bartosz Krawczyk
  * \date 14/06/2024
  * \brief Operacje wejscia/wyjscia
  */

/* 
Napisz program sprawdzajacy czy liczba jest parzysta/nieparzysta:
- trzy funkcje:  
(a) w jednej sprawdzamy z wykorzystaniem operacji bitowych (&);
(b) w drugiej inaczej (eg. modulo)
(c) w trzeciej sprawdzenie z uzyciem operatora warunkowego zamiast if (lub jako warunek w if: TRUE || FALSE; (... ? 0 : 1))

- w kodzie funkcji prosze rozpisac jako komentarz przykladowe sprawdzenie
- nazwac program: ZadParzysta.cc   
*/

#include <iostream>

// Function (a) - Check using bitwise operations
bool isEvenBitwise(int num) {
    // Example check: if the least significant bit is 0, the number is even
    // 4 in binary is 100, 4 & 1 is 0, so 4 is even
    // 5 in binary is 101, 5 & 1 is 1, so 5 is odd
    return (num & 1) == 0;
}

// Function (b) - Check using modulo operation
bool isEvenModulo(int num) {
    return num % 2 == 0;
}

// Function (c) - Check using the conditional operator
bool isEvenConditional(int num) {
    return num % 2 == 0 ? true : false;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    // Checking using bitwise operations
    if (isEvenBitwise(number)) {
        std::cout << "Using bitwise operations: " << number << " is even.\n";
    } else {
        std::cout << "Using bitwise operations: " << number << " is odd.\n";
    }

    // Checking using modulo operation
    if (isEvenModulo(number)) {
        std::cout << "Using modulo operation: " << number << " is even.\n";
    } else {
        std::cout << "Using modulo operation: " << number << " is odd.\n";
    }

    // Checking using the conditional operator
    if (isEvenConditional(number)) {
        std::cout << "Using conditional operator: " << number << " is even.\n";
    } else {
        std::cout << "Using conditional operator: " << number << " is odd.\n";
    }

    return 0;
}
