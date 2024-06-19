/** 4.8.1
  * \author: Bartosz Krawczyk
  * \date 18/06/2024
  * \brief Operacje wejscia/wyjscia
  */

/*
(a) i (b) stworz takze dla porownania bez dyrektywy preprocesora
*/
#include <iostream>
#include <string>

// Equivalent to VALUE using constant variable
const int value = 1;

// Function equivalent to TO_STRING
std::string toString(int x) {
    return std::to_string(x);
}

// Function equivalent to CONCATENATE
int concatenate(int a, int b) {
    return a * 100 + b; // Just an example of concatenation
}

// Function using the value constant
void showWithoutPreprocessor() {
    std::cout << "Constant value: " << value << std::endl;
    
    // Equivalent to TO_STRING(MY_MACRO)
    std::cout << "toString(100): " << toString(100) << std::endl;

    // Equivalent to CONCATENATE(foo, bar)
    int foobar = concatenate(42, 0); // creates an integer variable 'foobar'
    std::cout << "concatenate(42, 0): " << foobar << std::endl;
}

// Equivalent to MESSAGE
const std::string message = "MY_MACRO is not defined";

void showConstantMessage() {
    std::cout << message << std::endl;
}

int main() {
    showWithoutPreprocessor();
    showConstantMessage();
    return 0;
}
