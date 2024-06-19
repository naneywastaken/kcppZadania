/** 4.6
  * \author: Bartosz Krawczyk
  * \date 18/06/2024
  * \brief Operacje wejscia/wyjscia
  */

/* 
Napisz program pokazujacy dzialanie instrukcji (kazda jako osobna funkcja; trzy funkcje od a do c):
(a) while    (pokazujace while z inkrementacja: i++, ++i)
(b) do-while (pokazujace do-while z inkrementacja: i++, ++i)
(c) for
- wykorzystaj: break, continue, return
- nazwac program: ZadPetle.cc
*/

#include <iostream>

// Function (a) - Demonstrating while loop
void whileLoopDemo() {
    int i = 0;
    std::cout << "While loop demonstration:\n";
    while (i < 10) {
        if (i == 5) {
            std::cout << "Breaking at i = " << i << "\n";
            break;
        }
        if (i % 2 == 0) {
            std::cout << "Continuing at i = " << i << " (i is even)\n";
            ++i;
            continue;
        }
        std::cout << "i (before i++): " << i << "\n";
        i++;
        std::cout << "i (after i++): " << i << "\n";
    }
    std::cout << "End of while loop\n\n";
}

// Function (b) - Demonstrating do-while loop
void doWhileLoopDemo() {
    int i = 0;
    std::cout << "Do-while loop demonstration:\n";
    do {
        if (i == 5) {
            std::cout << "Breaking at i = " << i << "\n";
            break;
        }
        if (i % 2 == 0) {
            std::cout << "Continuing at i = " << i << " (i is even)\n";
            ++i;
            continue;
        }
        std::cout << "i (before i++): " << i << "\n";
        i++;
        std::cout << "i (after i++): " << i << "\n";
    } while (i < 10);
    std::cout << "End of do-while loop\n\n";
}

// Function (c) - Demonstrating for loop
void forLoopDemo() {
    std::cout << "For loop demonstration:\n";
    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            std::cout << "Breaking at i = " << i << "\n";
            break;
        }
        if (i % 2 == 0) {
            std::cout << "Continuing at i = " << i << " (i is even)\n";
            continue;
        }
        std::cout << "i (inside loop): " << i << "\n";
    }
    std::cout << "End of for loop\n\n";
}

int main() {
    whileLoopDemo();
    doWhileLoopDemo();
    forLoopDemo();
    return 0;
}
