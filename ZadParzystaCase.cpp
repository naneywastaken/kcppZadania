/** 4.5
  * \author: Bartosz Krawczyk
  * \date 18/06/2024
  * \brief Operacje wejscia/wyjscia
  */

/* 
Napisz program z uzyciem switch wybierajacy do wykonania jedna z trzech funkcji z zadania ZadParzysta.cc:
- nazwac program: ZadParzystaCase.cc (kopia ZadParzyste do ZadParzysteCase+switch, lub pominiecie ZadParzyste i umieszczenie wszystkiego w ZadParzystaCase)
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
    int choice;

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Choose the method to check if the number is even or odd:\n";
    std::cout << "1. Using bitwise operations\n";
    std::cout << "2. Using modulo operation\n";
    std::cout << "3. Using conditional operator\n";
    std::cout << "Enter your choice (1/2/3): ";
    std::cin >> choice;

    bool isEven;

    switch(choice) {
        case 1:
            isEven = isEvenBitwise(number);
            std::cout << "Using bitwise operations: ";
            break;
        case 2:
            isEven = isEvenModulo(number);
            std::cout << "Using modulo operation: ";
            break;
        case 3:
            isEven = isEvenConditional(number);
            std::cout << "Using conditional operator: ";
            break;
        default:
            std::cout << "Invalid choice.\n";
            return 1;
    }

    if (isEven) {
        std::cout << number << " is even.\n";
    } else {
        std::cout << number << " is odd.\n";
    }

    return 0;
}
