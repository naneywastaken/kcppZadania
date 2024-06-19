/** 2.2
  * \author: Bartosz Krawczyk
  * \date 17/05/2024
  * \brief Arrays in C++
  */

/*
Napisz program przekazujacy tablice z zachowaniem rozmiaru
- nazwac program: ZadPrzekazywanieTablic.cc
*/

#include <iostream>

// Function to process array and print its elements
void processArray(int (&arr)[5]) {
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the elements of the array
    std::cout << "Elements of the array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Define an array
    int arr[] = {1, 2, 3, 4, 5};

    // Call the function and pass the array by reference
    processArray(arr);

    return 0;
}
