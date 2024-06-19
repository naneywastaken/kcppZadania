/** 2.1
  * \author: Bartosz Krawczyk
  * \date 17/05/2024
  * \brief Returning methods in C++
  */

/*
Napisac program z czterema funkcjami z ktorych kazda zwraca inaczej:
1. Przez wartosc
2. Przez referencje
3. Przez wskaznik
4. Tablice 
- nazwac program: ZadZwracanie.cc
*/

#include <iostream>

// Function returning value by value
int returnValueByValue(int x) {
    return x * 2;
}

// Function returning value by reference
void returnValueByReference(int x, int& result) {
    result = x * 2;
}

// Function returning value by pointer
void returnValueByPointer(int x, int* result) {
    *result = x * 2;
}

// Function returning value by array
void returnValueByArray(int x, int result[]) {
    result[0] = x * 2;
}

int main() {
    int input = 5;
    int resultByValue = returnValueByValue(input);

    int resultByReference;
    returnValueByReference(input, resultByReference);

    int resultByPointer;
    returnValueByPointer(input, &resultByPointer);

    int resultByArray[1];
    returnValueByArray(input, resultByArray);

    std::cout << "Result by value: " << resultByValue << std::endl;
    std::cout << "Result by reference: " << resultByReference << std::endl;
    std::cout << "Result by pointer: " << resultByPointer << std::endl;
    std::cout << "Result by array: " << resultByArray[0] << std::endl;

    return 0;
}
