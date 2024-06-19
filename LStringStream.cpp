/** 4.0
  * \author: Bartosz Krawczyk
  * \date 14/06/2024
  * \brief Operacje wejscia/wyjscia
  */

/* 
Napisz program z przykladem zastosowania klasy stringstream z biblioteki sstream 
- nazwac program LStringStream.cc
*/

#include <iostream>
#include <sstream>
#include <string>

int main() {
    // Example input string
    std::string input = "The 3 little pigs have 5 apples and 7 oranges.";
    std::stringstream ss(input);
    std::string word;
    int sum = 0;

    // Extract words from the stringstream
    while (ss >> word) {
        // Try to convert each word to an integer
        std::stringstream convert(word);
        int number;
        if (convert >> number) {
            sum += number;
        }
    }

    // Output the result
    std::cout << "The sum of the numbers in the input string is: " << sum << std::endl;

    return 0;
}
