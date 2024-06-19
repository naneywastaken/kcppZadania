/** 4.8
  * \author: Bartosz Krawczyk
  * \date 18/06/2024
  * \brief Operacje wejscia/wyjscia
  */

/*
Napisz program pokazujacy zastosowanie dyrektywy preprocesora:
'#ifdef' (#else)
'#ifndef'
oraz
'#define'
(a) uzycie makra
(b) uzycie '#' i '##'
(a) i (b) stworz takze dla porownania bez dyrektywy preprocesora
- nazwac program: ZadPreprocesor.cc
*/

#include <iostream>

// Define a macro MY_MACRO
#define MY_MACRO 100

// Using MY_MACRO to demonstrate #ifdef and #ifndef
#ifdef MY_MACRO
    #define VALUE 1
#else
    #define VALUE 0
#endif

// Define a macro with parameters to demonstrate # and ##
#define TO_STRING(x) #x
#define CONCATENATE(a, b) a##b

// Function using the VALUE macro
void showPreprocessor() {
    std::cout << "Preprocessor directive VALUE: " << VALUE << std::endl;
    
    // Using # to convert macro argument to string
    std::cout << "TO_STRING(MY_MACRO): " << TO_STRING(MY_MACRO) << std::endl;

    // Using ## to concatenate tokens
    int CONCATENATE(foo, bar) = 42; // creates an integer variable 'foobar'
    std::cout << "CONCATENATE(foo, bar): " << foobar << std::endl;
}

// Undefine MY_MACRO to demonstrate #ifndef
#undef MY_MACRO

#ifndef MY_MACRO
    #define MESSAGE "MY_MACRO is not defined"
#endif

void showMessage() {
    std::cout << MESSAGE << std::endl;
}

int main() {
    showPreprocessor();
    showMessage();
    return 0;
}
