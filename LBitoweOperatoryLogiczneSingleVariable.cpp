/** 3.8
  * \author: Bartosz Krawczyk
  * \date 14/06/2024
  * \brief Arytmetyka wskaznikow w C++
  */

/* 
Prosze napisac samodzielny program ktory jako argument bedzie przyjmowal tablice 8
elementowa, gdzie na poszczegolnych pozycjach tablicy bedize 0 lub 1. Program bedzie
zwracal liczbe, ktora w formie binarnej bedzie miala ustawione 1 na pozycjach odpowiadajacych
pozycjom 1 w tablicy. Wystarczy zmodyfikowac program LBitoweOperatoryLogiczneC.cc
- nazwac program: LBitoweOperatoryLogiczneSingleVariable.cc
*/

#include <iostream>
#include <string>
using namespace std;

int binaryStringToNumber(const string &binaryString);

int main() {
    string binaryString;

    cout << "Enter an 8-bit binary string: ";
    cin >> binaryString;

    // Validate input length
    if (binaryString.length() != 8) {
        cout << "Invalid input. Please enter exactly 8 characters." << endl;
        return 1;
    }

    // Validate input characters
    for (char c : binaryString) {
        if (c != '0' && c != '1') {
            cout << "Invalid input. Please enter only '0' or '1'." << endl;
            return 1;
        }
    }

    int result = binaryStringToNumber(binaryString);
    cout << "The resulting number is: " << result << endl;

    return 0;
}

int binaryStringToNumber(const string &binaryString) {
    int number = 0;

    for (int i = 0; i < 8; i++) {
        if (binaryString[i] == '1') {
            number |= (1 << (7 - i));
        }
    }

    return number;
}
