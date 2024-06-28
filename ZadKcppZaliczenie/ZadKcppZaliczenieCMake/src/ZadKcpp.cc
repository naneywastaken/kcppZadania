#include "ZadKcpp.h"
#include <iostream>
#include <limits> // Include for std::numeric_limits
#include <fstream>
#include <bitset>
#include <algorithm>

ZadKcpp::ZadKcpp() {}
ZadKcpp::~ZadKcpp() {}

void ZadKcpp::invokeMethod(int methodNumber) {
    switch (methodNumber) {
        case 1:
            enumExample();
            break;
        case 2:
            fileIOExample();
            break;
        case 3:
            binaryToIntegerExample();
            break;
        case 4:
            arrayManipulationExample();
            break;
        case 5:
            returnTypesExample();
            break;
        case 6:
            displayMethodDescription(methodNumber);
            break;
        default:
            std::cout << "Invalid method" << std::endl;
            break;
    }
}

void ZadKcpp::displayMethodDescription(int methodNumber) {
    switch (methodNumber) {
        case 1:
            std::cout << "Demonstrates the use of enums with days of the week." << std::endl;
            break;
        case 2:
            std::cout << "Demonstrates file I/O operations within a class." << std::endl;
            break;
        case 3:
            std::cout << "Demonstrates binary to integer conversion." << std::endl;
            break;
        case 4:
            std::cout << "Demonstrates array size and data manipulation." << std::endl;
            break;
        case 5:
            std::cout << "Demonstrates returning different types of values based on input." << std::endl;
            break;
        default:
            std::cout << "No information available." << std::endl;
            break;
    }
}

void ZadKcpp::arrayManipulationExample() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (std::cin.fail() || size <= 0) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');        std::cout << "Invalid input. Please enter a valid size greater than 0." << std::endl;
        return;
    }

    int arr[size];
    std::cout << "Enter " << size << " integers for the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Reverse the array
    std::reverse(arr, arr + size);
    std::cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void ZadKcpp::returnTypesExample() {
    int input;
    std::cout << "Enter an integer: ";
    std::cin >> input;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a valid integer." << std::endl;
        return;
    }

    int resultByValue = returnValueByValue(input);
    std::cout << "Result by value: " << resultByValue << std::endl;

    int resultByReference;
    returnValueByReference(input, resultByReference);
    std::cout << "Result by reference: " << resultByReference << std::endl;

    int resultByPointer;
    returnValueByPointer(input, &resultByPointer);
    std::cout << "Result by pointer: " << resultByPointer << std::endl;

    int resultByArray[1];
    returnValueByArray(input, resultByArray);
    std::cout << "Result by array: " << resultByArray[0] << std::endl;
}

int ZadKcpp::returnValueByValue(int x) {
    return x;
}

void ZadKcpp::returnValueByReference(int x, int& result) {
    result = x;
}

void ZadKcpp::returnValueByPointer(int x, int* result) {
    *result = x;
}

void ZadKcpp::returnValueByArray(int x, int result[]) {
    result[0] = x;
}


void ZadKcpp::enumExample() {
    enum DaysOfWeek { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

    int dayNumber;
    std::cout << "Enter a day number (1 for Monday, 7 for Sunday): ";
    std::cin >> dayNumber;

    if (std::cin.fail() || dayNumber < 1 || dayNumber > 7) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid input" << std::endl;
        return;
    }

    DaysOfWeek day = static_cast<DaysOfWeek>(dayNumber);

    switch (day) {
        case Monday:
            std::cout << "Monday" << std::endl;
            break;
        case Tuesday:
            std::cout << "Tuesday" << std::endl;
            break;
        case Wednesday:
            std::cout << "Wednesday" << std::endl;
            break;
        case Thursday:
            std::cout << "Thursday" << std::endl;
            break;
        case Friday:
            std::cout << "Friday" << std::endl;
            break;
        case Saturday:
            std::cout << "Saturday" << std::endl;
            break;
        case Sunday:
            std::cout << "Sunday" << std::endl;
            break;
        default:
            std::cout << "Unknown day" << std::endl;
            break;
    }
}

void ZadKcpp::fileIOExample() {
    std::ofstream outFile("example.txt");
    if (outFile.is_open()) {
        std::string content;
        std::cout << "Enter content to write to the file: ";
        std::cin.ignore();
        std::getline(std::cin, content);
        outFile << content << std::endl;
        outFile.close();
        std::cout << "Successfully wrote to the file." << std::endl;
    } else {
        std::cerr << "Unable to open file for writing." << std::endl;
    }

    std::ifstream inFile("example.txt");
    if (inFile.is_open()) {
        std::string line;
        std::cout << "Reading content from the file:" << std::endl;
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cerr << "Unable to open file for reading." << std::endl;
    }
}

void ZadKcpp::binaryToIntegerExample() {
    std::string binaryInput;
    std::cout << "Enter a binary number: ";
    std::cin >> binaryInput;

    int integerOutput = std::stoi(binaryInput, nullptr, 2);
    std::cout << "The integer value is: " << integerOutput << std::endl;

    std::bitset<32> bitsetOutput(integerOutput);
    std::string binaryOutput = bitsetOutput.to_string();
    size_t firstOne = binaryOutput.find('1');
    binaryOutput = binaryOutput.substr(firstOne != std::string::npos ? firstOne : 0);
    std::cout << "The binary string representation is: " << binaryOutput << std::endl;
}
