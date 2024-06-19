/** 5.2
  * \author: Bartosz Krawczyk
  * \date 18/06/2024
  * \brief Klasy
  */

/*
Stworz plik z dzialajaca struktura:
- deklaracja,
- definicja obiektow (w dowolny sposob):  
    - wywolanie,  
    - zmiana wartosci,  
    - odczyt wartosci,  
    // - czy mozna stworzyc konstruktor (inicjalizacja wartosci poczatkowych - standard, lista inicjalizacyjna)
- nazwij program: ZadStruct.cc
*/

#include <iostream>
using namespace std;

// Structure declaration
struct MyStruct {
    int a;
    int b;
    int c;

    // Default constructor
    MyStruct() : a(0), b(0), c(0) {}

    // Constructor with initialization list
    MyStruct(int x, int y, int z) : a(x), b(y), c(z) {}

    // Function to change values
    void setValues(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    // Function to print values
    void printValues() const {
        cout << "A: " << a << ", B: " << b << ", C: " << c << endl;
    }
};

int main() {
    // Object definition and initialization using default constructor
    MyStruct obj1;
    cout << "Initial values (default constructor): ";
    obj1.printValues();

    // Changing values
    obj1.setValues(10, 20, 30);
    cout << "Values after setValues(): ";
    obj1.printValues();

    // Reading values
    cout << "Reading values individually: A: " << obj1.a << ", B: " << obj1.b << ", C: " << obj1.c << endl;

    // Object definition and initialization using constructor with initialization list
    MyStruct obj2(21, 42, 37);
    cout << "Initial values obj2(initialization list): ";
    obj2.printValues();

    return 0;
}
