/** 4.2
  * \author: Bartosz Krawczyk
  * \date 14/06/2024
  * \brief Operacje wejscia/wyjscia
  */

/* 
Napisz program pokazujacy funkcjonalnosc:
- wypisywania na ekran,
- +zapisywanie do strumienia bledow
- zapisywania do pliku,
- odczytywania z pliku,
- nazwac program: ZadCinCoutFile.cc
*/

#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Writing to the screen
    std::cout << "This message is written to the screen." << std::endl;

    // Writing to the error stream
    std::cerr << "This message is written to the error stream." << std::endl;

    // File name
    std::string fileName = "zadcincoutfile.txt";

    // Saving to file
    std::ofstream outFile(fileName);
    if (outFile.is_open()) {
        outFile << "This message is written to the file." << std::endl;
        outFile << "Here is another line of text." << std::endl;
        outFile.close();
        std::cout << "Data has been written to " << fileName << "." << std::endl;
    } else {
        std::cerr << "Error opening file for writing: " << fileName << std::endl;
    }

    // Reading from file
    std::ifstream inFile(fileName);
    if (inFile.is_open()) {
        std::string line;
        std::cout << "Reading data from " << fileName << ":" << std::endl;
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cerr << "Error opening file for reading: " << fileName << std::endl;
    }

    return 0;
}
