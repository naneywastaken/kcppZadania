/** 3.5
  * \author: Bartosz Krawczyk
  * \date 13/06/2024
  * \brief Arytmetyka wskaznikow w C++
  */

/* 
Napisac program z przykladami:
(1) operatorow arytmetycznych i (2) operatorow przypisania 
(1) i (2) jako osobne funkcje: (1) OperatoryArytmetyczne (2) OperatoryPrzypisania 
- nazwac program: ZadOperatoryPrzypisania.cc
*/

#include <iostream>
using namespace std;

void ArithmeticOperators();
void AssignmentOperators();

int main() {
    ArithmeticOperators();
    AssignmentOperators();
    return 0;
}

void ArithmeticOperators() {
    int varA = 5;
    int varB = 27;
    float result[10];

    result[0] = varB / varA;
    result[1] = varB % varA;

    if (varB % varA != 0) 
        cout << "Values differ" << endl;

    cout << "Rezultaty: "
         << result[0] << "\t"
         << result[1] << endl;
}

void AssignmentOperators() {
    int varA = 5;
    int varB = 27;

    varA += 3; // Equivalent to varA = varA + 3
    varB -= 2; // Equivalent to varB = varB - 2
    varA *= 2; // Equivalent to varA = varA * 2
    varB /= 3; // Equivalent to varB = varB / 3
    varA %= 4; // Equivalent to varA = varA % 4

    cout << "Assignment Operator Results:" << endl;
    cout << "varA: " << varA << endl;
    cout << "varB: " << varB << endl;
}
