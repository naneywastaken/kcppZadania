/** 3.4
  * \author: Bartosz Krawczyk
  * \date 13/06/2024
  * \brief Arytmetyka wskaznikow w C++
  */

/* 
Co robią poniższe operacje? Napisać program który pokazuje ich działanie.
    1. Funkcja1()
        p++;
        ++p;
        ++*p;
        ++(*p);
        ++*(p);
        *p++;
        (*p)++;
        *(p)++;
        *++p;
        *(++p);

oraz (Funkcja2()) w analogii do LArytmetykaWzkaznikowZmienne.cc aby wypisywał na ekran:

    1.  A, B, C: 0  0   0
    2.  A, B, C: 0  10  0
    3.  A, B, C: 0  10  20
    4.  A, B, C: 0  30  20
    5.  A, B, C: 40 30  20
    6.  A, B, C: 40 50  20
    7.  A, B, C: 40 50  60
    8.  A, B, C: 40 70  60
    9.  A, B, C: 80 70  60
    10. A, B, C: 80 90  60

przy początkowych wartościach zmiennych: int a = 0, b = 0, c = 0;
- nazwać program: ZadArytmetykaWskaznikow.cc
*/
#include <iostream>
#include <cmath>

using namespace std;

void function1() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;  // Pointer to the first element of the array
    cout << "Initial value pointed to by p: " << *p << endl;
    cout << endl;

    std::cout << "Post-increment pointer" << std::endl;
    // Move the pointer to the next element AFTER the current operation.
    std::cout << "Before p++: " << *p << std::endl; // Output: 10
    p++;
    std::cout << "After p++: " << *p << std::endl;  // Output: 20
    p = arr; // Reset pointer

    std::cout << "Pre-increment pointer" << std::endl;
    // Move the pointer to the next element BEFORE the current operation.
    std::cout << "Before ++p: " << *p << std::endl; // Output: 10
    ++p;
    std::cout << "After ++p: " << *p << std::endl;  // Output: 20
    p = arr; // Reset pointer
    std::cout << std::endl;

    std::cout << "Pre-increment value pointed to by p" << std::endl;
    // Increment the value pointed to by p before the current operation.
    std::cout << "Before ++*p: " << *p << std::endl; // Output: 10
    ++*p;
    std::cout << "After ++*p: " << *p << std::endl;  // Output: 11
    p = arr; // Reset pointer

    std::cout << "Pre-increment value pointed to by p" << std::endl;
    // Same as ++*p. Increment the value pointed to by p before the current operation.
    std::cout << "Before ++(*p): " << *p << std::endl;
    ++(*p);
    std::cout << "After ++(*p): " << *p << std::endl;
    p = arr; // Reset pointer

    std::cout << "Pre-increment value pointed to by p" << std::endl;
    // Same as ++*p. Increment the value pointed to by p before the current operation.
    std::cout << "Before ++*(p): " << *p << std::endl;
    ++*(p);
    std::cout << "After ++*(p): " << *p << std::endl;
    p = arr; // Reset pointer
    std::cout << std::endl;

    std::cout << "Dereference then post-increment pointer" << std::endl;
    // Dereference p and then move p to the next element after the current operation.
    std::cout << "Before *p++: " << *p << std::endl;
    *p++;
    std::cout << "After *p++: " << *p << std::endl;
    p = arr; // Reset pointer

    std::cout << "Post-increment value pointed to by p" << std::endl;
    // Dereference p, use the value, and then increment the value.
    std::cout << "Before (*p)++: " << *p << std::endl;
    (*p)++;
    std::cout << "After (*p)++: " << *p << std::endl;
    p = arr; // Reset pointer

    std::cout << "Dereference then post-increment pointer" << std::endl;
    // Same as *p++. Dereference p and then move p to the next element after the current operation.
    std::cout << "Before *(p)++: " << *p << std::endl;
    *(p)++;
    std::cout << "After *(p)++: " << *p << std::endl;
    p = arr; // Reset pointer

    std::cout << "Pre-increment pointer then dereference" << std::endl;
    // Move the pointer to the next element before the current operation and then dereference it.
    std::cout << "Before *++p: " << *p << std::endl;
    *++p;
    std::cout << "After *++p: " << *p << std::endl;
    p = arr; // Reset pointer

    std::cout << "Pre-increment pointer then dereference" << std::endl;
    // Same as *++p. Move the pointer to the next element before the current operation and then dereference it.
    std::cout << "Before *(++p): " << *p << std::endl;
    *(++p);
    std::cout << "After *(++p): " << *p << std::endl;
    p = arr; // Reset pointer
}

void SizeofPointer() {
    int a;
    int *wsk = &a;
    cout << "Address(zmienna,wskaznik): " << &a << "\t" << &wsk << endl;
    cout << "Sizeof(zmienna,wskaznik):  " << sizeof(a) << "\t" << sizeof(wsk) << endl;
}

// I have absolutely no idea what im doing right now
// Pure magic below

void function2() {
    int a = 0, b = 0, c = 0; // Initializing variables to 0
    float x;
    int *wsk_int;

    // Printing sizes of different data types
    cout << "Size of integer: " << sizeof(int) << endl;
    cout << "Size of float:   " << sizeof(float) << endl;
    cout << "Size of double:  " << sizeof(double) << endl;

    // Initial values
    cout << "1.  A, B, C: " << a << " " << b << " " << c << endl;

    // Assigning value to b
    b = 10;
    cout << "2.  A, B, C: " << a << " " << b << " " << c << endl;

    // Using pointer to change value of c
    wsk_int = &c;
    *wsk_int = 20;
    cout << "3.  A, B, C: " << a << " " << b << " " << c << endl;

    // Using pointer to change value of b by offset
    wsk_int = &a;
    *(wsk_int + 1) = 30;
    cout << "4.  A, B, C: " << a << " " << b << " " << c << endl;

    // Using pointer arithmetic to change value of a and b
    *(&a) = 40; // Changing value of a
    *(&a + 1) = 30; // Changing value of b back to 30
    cout << "5.  A, B, C: " << a << " " << b << " " << c << endl;

    // Using pointer arithmetic to change value of b to 50
    *(&c - 1) = 50;
    cout << "6.  A, B, C: " << a << " " << b << " " << c << endl;

    // Using typecasting and pointer arithmetic to change value of c to 60
    *( (int*)&x - 2) = 60;
    cout << "7.  A, B, C: " << a << " " << b << " " << c << endl;

    // Using typecasting and pointer arithmetic to change value of b via x to 70
    *(int*)( &x - 1) = 70;
    cout << "8.  A, B, C: " << a << " " << b << " " << c << endl;

    // Using typecasting and pointer arithmetic to change value of a via pointer to 80
    *((int*)&wsk_int - 2) = 80;
    cout << "9.  A, B, C: " << a << " " << b << " " << c << endl;

    // Using typecasting and pointer arithmetic to change value of b via pointer to 90
    *(int*) (&wsk_int - 1) = 90;
    cout << "10. A, B, C: " << a << " " << b << " " << c << endl;

    SizeofPointer();  
}


int main() {
    cout << "Function 1 Output:\n";
    function1();
    cout << "\nFunction 2 Output:\n";
    function2();

    return 0;
}
