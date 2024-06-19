/** 1.3
  * \author: Bartosz Krawczyk
  * \date 17/05/2024
  * \brief String w C++
  * \run in terminal: ./name.exe function1 function3 function5
  */

/*
Napisac program ktory zawiera:
- funkcje main
- 5 innych funkcji, z czego dwie zadeklarowane jako: extern C
- dodatkowo do wykonania w pozniejszej czesci kursu: wywolujac program decydujemy, 
ktore z funkcji maja zostac wykonane przez podanie tego w liscie argumentow przekazanych do funkcji main
- nazwac program: ZadMainExample.cc
*/

#include <iostream>

// Function declarations
void function1();
void function2();
extern "C" void function3();
extern "C" void function4();
void function5();

int main(int argc, char *argv[]) {
    // Check if at least one argument is provided
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " [function1] [function2] [function3] [function4] [function5]" << std::endl;
        return 1;
    }

    // Iterate through arguments and execute corresponding functions
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "function1") {
            function1();
        } else if (arg == "function2") {
            function2();
        } else if (arg == "function3") {
            function3();
        } else if (arg == "function4") {
            function4();
        } else if (arg == "function5") {
            function5();
        } else {
            std::cerr << "Unknown function: " << arg << std::endl;
        }
    }

    return 0;
}

// Function definitions
void function1() {
    std::cout << "Function 1 executed (I'm C++)" << std::endl;
}

void function2() {
    std::cout << "Function 2 executed (I'm C++)" << std::endl;
}

// Function 3 and 4 are declared with extern "C"
extern "C" void function3() {
    std::cout << "Function 3 executed (I'm C)" << std::endl;
}

extern "C" void function4() {
    std::cout << "Function 4 executed (I'm C)" << std::endl;
}

void function5() {
    std::cout << "Function 5 executed (I'm C++)" << std::endl;
}
