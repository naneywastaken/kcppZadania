/** 3.2
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
using namespace std;

int main() {
    int tab[] = {11, 22, 33, 44, 55}, i = 3, *p, *q;

    p = &tab[0] + 3;
    cout << "*p     = " << *p << endl;  // Output: *p = 44

    p = p - 2;
    cout << "*p     = " << *p << endl;  // Output: *p = 22

    q = tab;
    cout << "*(q+2) = " << *(q+2) << endl;  // Output: *(q+2) = 33
    cout << "q[2]   = " << q[2]   << endl;  // Output: q[2] = 33

    cout << "q[i]   = " << q[i] << endl;    // Output: q[i] = 44
    cout << "i[q]   = " << i[q] << endl;    // Output: i[q] = 44
    // Explanation: q[i] is equivalent to *(q + i), which means *(tab + 3) = 44.
    //              Similarly, i[q] is equivalent to *(i + q), which also evaluates to *(tab + 3) = 44.

    i++;
    cout << "*(i+q)   = " << *(i+q) << endl;  // Output: *(i+q) = 55
    // Explanation: *(i + q) is equivalent to *(3 + tab), which means tab[3] = 44, then i is incremented to 4, so *(4 + tab) = 55.

    return 0;
}
