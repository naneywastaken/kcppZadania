/** 3.1
  * \author: Bartosz Krawczyk
  * \date 17/05/2024
  * \brief Arytmetyka wskaznikow w C++
  */

/*
Kierunek adresowania pamieci 
- wyjasnic w komentarzu do programu podajacego przyklad:
- wypisywanie adresow deklarowanych zmiennych
- nazwac program: ZadAdresowaniePamieci.cc
*/

#include <iostream>

int main() {
    // Declare variables
    int a = 10;
    int b = 20;
    int c = 30;

    // Print the addresses of the variables
    std::cout << "Address of variable 'a': " << &a << std::endl;
    std::cout << "Address of variable 'b': " << &b << std::endl;
    std::cout << "Address of variable 'c': " << &c << std::endl;

    return 0;
}

// In C++, variables are stored in memory, and each variable has an address associated with it.
// The memory addressing direction refers to how memory addresses are assigned to variables in memory.
// Generally, memory addresses increase from lower to higher memory addresses as new variables are declared.

// Example:
// Let's say we have three variables: 'a', 'b', and 'c'.
// When these variables are declared in the program, they are allocated memory addresses sequentially.
// The memory layout might look like this:

// Address       Variable
// 0x7fff5fbff61c    a       (for example)
// 0x7fff5fbff620    b       (higher memory address)
// 0x7fff5fbff624    c       (higher memory address)

// As long as the addresses are unique program behaves as expected
// However, it's important to note that the actual memory addresses may vary each time the program is executed.
