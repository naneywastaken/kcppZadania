/** 5.4
  * \author: Bartosz Krawczyk
  * \date 18/06/2024
  * \brief Klasy
  */

/*
Stworz klase (program: ZadKlasaKonstruktor.cc) oraz structure (program: ZadStructKonstruktor.cc) 
z przykladami konstruktorow i inicializacja zmiennych:
- domyslny konstruktor,
- domyslny destruktor,
- konstruktor z niepusta liczba zmiennych argumentow
- inicjalizacja zmiennych: 
    - standardowa,  
    - inicjalizacyjna za pomoca listy inicjalizacyjnej
*/


#include <iostream>
#include <initializer_list>

using namespace std;

// Struct example
struct MyStruct {
    int x;
    double y;

    // Default constructor
    MyStruct() {
        x = 0;
        y = 0.0;
        cout << "MyStruct default constructor called." << endl;
    }

    // Constructor with arguments
    MyStruct(int xVal, double yVal) : x(xVal), y(yVal) {
        cout << "MyStruct parameterized constructor called." << endl;
    }

    // Destructor
    ~MyStruct() {
        cout << "MyStruct destructor called." << endl;
    }
};

// Class example
class MyClass {
private:
    int a;
    double b;
    string c;

public:
    // Default constructor
    MyClass() : a(0), b(0.0), c("default") {
        cout << "MyClass default constructor called." << endl;
    }

    // Constructor with arguments using initializer list
    MyClass(int aVal, double bVal, string cVal) : a(aVal), b(bVal), c(cVal) {
        cout << "MyClass parameterized constructor called." << endl;
    }

    // Constructor with variable arguments using std::initializer_list
    MyClass(initializer_list<int> values) {
        auto it = values.begin();
        a = (it != values.end()) ? *it++ : 0;
        b = (it != values.end()) ? *it++ : 0.0;
        c = (it != values.end()) ? to_string(*it) : "default";
        cout << "MyClass initializer_list constructor called." << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "MyClass destructor called." << endl;
    }

    // Display values
    void display() const {
        cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    }
};

int main() {
    // Using MyStruct
    cout << "Creating MyStruct objects:" << endl;
    MyStruct s1; // Default constructor
    MyStruct s2(10, 20.5); // Parameterized constructor

    // Using MyClass
    cout << "\nCreating MyClass objects:" << endl;
    MyClass c1; // Default constructor
    MyClass c2(30, 40.5, "hello"); // Parameterized constructor
    MyClass c3({50, 60}); // Initializer list constructor

    // Display values
    cout << "\nDisplaying MyClass object values:" << endl;
    c1.display();
    c2.display();
    c3.display();

    return 0;
}
