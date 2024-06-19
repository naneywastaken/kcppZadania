/** 5.3
  * \author: Bartosz Krawczyk
  * \date 18/06/2024
  * \brief Klasy
  */

/*
Pokaz dzialanie uni (niebezpieczenstwa, bledy)
- nazwij program: ZadUnia.cc
*/

#include <iostream>
using namespace std;

// Union declaration
union MyUnion {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    MyUnion u;

    // Assign an integer value
    u.intValue = 42;
    cout << "After setting intValue to 42:" << endl;
    cout << "intValue: " << u.intValue << endl;
    cout << "floatValue: " << u.floatValue << endl;
    cout << "charValue: " << u.charValue << endl;
    cout << endl;

    // Assign a float value
    u.floatValue = 3.14;
    cout << "After setting floatValue to 3.14:" << endl;
    cout << "intValue: " << u.intValue << endl;
    cout << "floatValue: " << u.floatValue << endl;
    cout << "charValue: " << u.charValue << endl;
    cout << endl;

    // Assign a char value
    u.charValue = 'A';
    cout << "After setting charValue to 'A':" << endl;
    cout << "intValue: " << u.intValue << endl;
    cout << "floatValue: " << u.floatValue << endl;
    cout << "charValue: " << u.charValue << endl;
    cout << endl;

    // Demonstrating potential dangers
    cout << "Potential dangers and undefined behaviors:" << endl;
    
    u.intValue = 97; // ASCII value of 'a'
    cout << "After setting intValue to 97 (ASCII 'a'):" << endl;
    cout << "intValue: " << u.intValue << endl;
    cout << "floatValue (interpreted as int): " << u.floatValue << endl; // Interpreting int as float
    cout << "charValue (interpreted as int): " << u.charValue << endl; // Interpreting int as char
    cout << endl;

    u.floatValue = 1.0;
    cout << "After setting floatValue to 1.0:" << endl;
    cout << "intValue (interpreted as float): " << u.intValue << endl; // Interpreting float as int
    cout << "floatValue: " << u.floatValue << endl;
    cout << "charValue (interpreted as float): " << u.charValue << endl; // Interpreting float as char
    cout << endl;

    return 0;
}
