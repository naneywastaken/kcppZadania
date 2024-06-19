/** 1.2
  * \author: Bartosz Krawczyk
  * \date 17/05/2024
  * \brief String w C++
  */

/* 
Napisz funkcje (osobny program) w ktorym zadeklarujesz string i uzyjesz na nim funkcji manipulacyjnych:   
    1. empty()          Zwraca wartosc true jezeli napis jest pusty.     
    2. size(), length() Zwraca ilosc znakow w napisie.  
    3. at()             Zwraca znak o podanym polozeniu, tak jak operator [], z tym ze ta metoda jest bezpieczniejsza - wyrzuca wyjatek w przypadku wyjscia poza zakres stringa.
    4. clear()          Usuwa wszystkie znaki z napisu. 
    5. erase(...)       Usuwa wybrane znaki. 
    6. find(...)        Znajduje podciag w ciagu, sa tez bardziej rozbudowane funkcje tego typu. 
    7. swap(...)        Zamienia miejscami dwa stringi, a staje sie b, a b staje sie a. 
    8. substr(...)      Zwraca podciag na podstawie indeksu poczatkowego i dlugosci podciagu.
    9. append(...)      Dopisuje do napisu.
*/     

#include <iostream>
#include <string>

using namespace std;

bool checkIfStringEmpty(const string& str) {
    return str.empty();
}

void printStringSize(const string& str) {
    cout << "Size of the string: " << str.size() << endl;
    cout << "Length of the string: " << str.length() << endl;
}

void accessCharacters(const string& str) {
    try {
        cout << "Character at position 0: " << str.at(0) << endl;
        cout << "Character at position 5: " << str.at(5) << endl;
        cout << "Character at position 17: " << str.at(17) << endl;
    } catch (const out_of_range& e) {
        cerr << "Exception: " << e.what() << endl;
    }
}

void clearString(string& str) {
    str.clear();
}

void eraseCharacters(string& str, size_t pos, size_t count) {
    str.erase(pos, count);
}

void findSubstring(const string& str, const string& subStr) {
    size_t found = str.find(subStr);
    if (found != string::npos) {
        cout << "Substring \"" << subStr << "\" found at position: " << found << endl;
    } else {
        cout << "Substring \"" << subStr << "\" not found" << endl;
    }
}

void swapStrings(string& str1, string& str2) {
    str1.swap(str2);
}

string getSubstring(const string& str, size_t pos, size_t count) {
    return str.substr(pos, count);
}

void appendString(string& str, const string& appendString) {
    str.append(appendString);
}

int main() {
    // Declare strings
    string str = "I am first string!";
    string str2 = "soy la segunda cadena de caracteres";
    string str3 = "";

    // Check if the strings are empty
    cout << "Is string1 empty? " << (checkIfStringEmpty(str) ? "Yes" : "No") << endl;
    cout << "Is string2 empty? " << (checkIfStringEmpty(str2) ? "Yes" : "No") << endl;
    cout << "Is string3 empty? " << (checkIfStringEmpty(str3) ? "Yes" : "No") << endl;
    cout << endl;

    // Print sizes of the strings
    printStringSize(str);
    printStringSize(str2);
    printStringSize(str3);
    cout << endl;

    // Accessing characters
    accessCharacters(str);
    cout << endl;

    // Clear the string
    cout << "String before clear(): \"" << str << "\"" << endl;
    clearString(str);
    cout << "String after clear(): \"" << str << "\"" << endl;
    cout << endl;

    // Resetting the string for further operations
    str = "I am first string once more!";

    // Erase characters from the string
    cout << "String before erase(): \"" << str << "\"" << endl;
    eraseCharacters(str, 17, 10);
    cout << "String after erase(): \"" << str << "\"" << endl;
    cout << endl;

    // Find substring in the string
    findSubstring(str, "first");
    findSubstring(str2, "gunda");
    findSubstring(str2, "a"); // returns index of first matched char
    cout << endl;

    // Swap strings
    cout << "Before swap:\nString1: " << str << "\nString2: " << str2 << endl;
    swapStrings(str, str2);
    cout << "After swap:\nString1: " << str << "\nString2: " << str2 << endl;
    cout << endl;

    // Swap back for further operations
    swapStrings(str, str2);

    // Substring
    string subString = getSubstring(str, 2, 8);
    cout << "Substring of string1: \"" << subString << "\"" << endl;
    cout << endl;

    // Append string
    appendString(str, " How 'bout you?");
    cout << "String1 after append: \"" << str << "\"" << endl;

    return 0;
}
