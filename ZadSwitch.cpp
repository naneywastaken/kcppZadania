/** 4.7
  * \author: Bartosz Krawczyk
  * \date 18/06/2024
  * \brief Operacje wejscia/wyjscia
  */

/*
Napisz program wykorzystujacy instrukcje switch gdzie:
- zamiast pojedynczego znaku bedzie sprawdzane cale slowo
- program moze byc uszczegolowieniem/modyfikacja (zrobic kopie pliku i zmienic kopie) tego co jest w ZadParzysteCase.cc
- nazwac program: ZadSwitch.cc
*/

#include <iostream>
#include <unordered_map>
#include <string>

// Function prototypes for different actions
void actionOne() {
    std::cout << "Action One executed.\n";
}

void actionTwo() {
    std::cout << "Action Two executed.\n";
}

void actionThree() {
    std::cout << "Action Three executed.\n";
}

void defaultAction() {
    std::cout << "Default action executed.\n";
}

int main() {
    // Create a map of string keys to function pointers
    std::unordered_map<std::string, void(*)()> wordActions;

    // Map words to corresponding actions
    wordActions["one"] = actionOne;
    wordActions["two"] = actionTwo;
    wordActions["three"] = actionThree;

    std::string inputWord;
    std::cout << "Enter a word: ";
    std::cin >> inputWord;

    // Find and execute the corresponding action
    if (wordActions.find(inputWord) != wordActions.end()) {
        wordActions[inputWord]();
    } else {
        defaultAction();
    }

    return 0;
}
