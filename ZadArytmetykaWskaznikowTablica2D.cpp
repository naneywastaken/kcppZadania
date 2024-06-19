/** 3.3
  * \author: Bartosz Krawczyk
  * \date 17/05/2024
  * \brief Arytmetyka wskaznikow w C++
  */

/*
Pokazac w jakiej kolejnosci jest adresowana tablica dwuwymiarowa (Tab[3][3]). 
Wypisac adresy poszczegolnych elementow. 
- nazwac program: ZadArytmetykaWskaznikowTablica2D.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Define your two-dimensional array
    int Tab[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Calculate the number of rows and columns in the array
    int numRows = sizeof(Tab) / sizeof(Tab[0]);
    int numCols = sizeof(Tab[0]) / sizeof(Tab[0][0]);

    // Vector to store addresses of elements
    vector<int*> addresses;

    // Display addresses of each element in the array
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            addresses.push_back(&Tab[i][j]);
            cout << "Address of element [" << i << "][" << j << "]: " << addresses.back() << endl;
        }
    }

    return 0;
}
