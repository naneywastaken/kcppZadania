#include "Menu.h"
#include "ZadKcpp.h"
#include <iostream>
#include <limits>

Menu::Menu() : isRunning(true) {}

Menu::~Menu() {}

void Menu::run() {
    short choice;
    ZadKcpp zadKcppObj;

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << " Welcome to the application " << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

    while (isRunning) {
        std::cout << "Available methods:" << std::endl;
        std::cout << "1) Enum example" << std::endl;
        std::cout << "2) File I/O operations" << std::endl;
        std::cout << "3) Binary to integer" << std::endl;
        std::cout << "4) Arrays size and manipulation" << std::endl;
        std::cout << "5) Return types example" << std::endl;
        std::cout << std::endl;
        std::cout << "6) Information about methods" << std::endl;
        std::cout << "0) Exit" << std::endl;
        std::cout << "--------------------------------" << std::endl;
        std::cout << "Enter a number: ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nInvalid input\n" << std::endl;
            continue;
        }

        std::cout << std::endl;

        switch (choice) {
            case 0:
                isRunning = false;
                break;
            case 6:
                std::cout << "Choose a method: ";
                std::cin >> choice;

                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "\nInvalid input\n" << std::endl;
                    continue;
                }

                std::cout << "\nMethod " << choice << "." << std::endl;
                zadKcppObj.displayMethodDescription(choice);
                std::cout << "\nContinue? (0 - exit): ";
                std::cin >> choice;

                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "\nInvalid input\n" << std::endl;
                    continue;
                }

                std::cout << std::endl;
                if (choice == 0) {
                    isRunning = false;
                }
                break;
            default:
                chooseProgram(choice, zadKcppObj);
                std::cout << "\nContinue? (0 - exit): ";
                std::cin >> choice;

                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "\nInvalid input\n" << std::endl;
                    continue;
                }

                std::cout << std::endl;
                if (choice == 0) {
                    isRunning = false;
                }
                break;
        }
    }
    std::cout << "Goodbye :)" << std::endl;
}

void Menu::chooseProgram(short choice, ZadKcpp& zadKcpp) {
    switch (choice) {
        case 1:
        case 2:
        case 3:
            zadKcpp.invokeMethod(choice);
            break;
        case 4:
            zadKcpp.arrayManipulationExample();
            break;
        case 5:
            zadKcpp.returnTypesExample();
            break;
        case 6:
            std::cout << "Choose a method: ";
            std::cin >> choice;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "\nInvalid input\n" << std::endl;
                break;
            }

            std::cout << "\nMethod " << choice << "." << std::endl;
            zadKcpp.displayMethodDescription(choice);
            std::cout << "\nContinue? (0 - exit): ";
            std::cin >> choice;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "\nInvalid input\n" << std::endl;
                break;
            }

            std::cout << std::endl;
            if (choice == 0) {
                isRunning = false;
            }
            break;
        default:
            std::cout << "--------------------------------------------" << std::endl;
            std::cout << "Invalid number. Try again!" << std::endl;
            std::cout << "--------------------------------------------" << std::endl;
            break;
    }
}
