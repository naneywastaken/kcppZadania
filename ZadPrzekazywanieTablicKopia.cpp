/** 2.3
  * \author: Bartosz Krawczyk
  * \date 17/05/2024
  * \brief Zwracanie przez funkcje
  */

/*
Napisz program przekazujacy kopie tablicy. 
- nazwac program: ZadPrzekazywanieTablicKopia.cc
*/

#include <iostream>

// Function to process array and print its elements
void processArray(int arr[5]) {
    // Print the memory address of the array parameter
    std::cout << "Inside processArray function:" << std::endl;
    std::cout << "Memory address of the array parameter: " << arr << std::endl;

    // Print the elements of the array
    std::cout << "Elements of the array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Modify the array
    for (int i = 0; i < 5; ++i) {
        arr[i] *= 2; // Double each element of the array
    }
}

int main() {
    // Define an array
    int arr[] = {1, 2, 3, 4, 5};

    // Print the memory address of the original array
    std::cout << "Inside main function:" << std::endl;
    std::cout << "Memory address of the original array: " << arr << std::endl;

    // Call the function and pass the array by value
    processArray(arr);

    // Print the elements of the modified array
    std::cout << "After calling processArray function:" << std::endl;
    std::cout << "Elements of the modified array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
