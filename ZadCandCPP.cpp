/** 4.3
  * \author: Bartosz Krawczyk
  * \date 14/06/2024
  * \brief Operacje wejscia/wyjscia
  */

/* 
Napisz program:
- pokazujacy wykonanie tych samych operacji w c i c++ (kcpp02::34)
- nazwac program: ZadCandCPP.cc
*/

// Equivalent Operations in C

#include <stdio.h>

int main() {
    // Printing integers
    printf("%i\n", 19);

    // Printing integers in hexadecimal
    printf("%x\n", 19);

    // Printing floating-point numbers
    printf("%f\n", 19.0);

    // Printing a variable of type double
    double var = 19.0;
    printf("%f\n", var);

    // Printing floating-point numbers with a field width
    printf("%9f\n", 3.0);

    // Printing floating-point numbers with a specified precision
    printf("%11.3f\n", 3.1234);

    // Printing a combination of a string, a floating-point number, and a character
    printf("Napis%f%c\n", 9.0, 'z');

    // Reading integers
    int varInt;
    scanf("%i", &varInt);
    printf("Read integer: %i\n", varInt);

    // Reading floating-point numbers
    float varFloat;
    scanf("%f", &varFloat);
    printf("Read float: %f\n", varFloat);

    // Reading double precision numbers
    double varDouble;
    scanf("%lf", &varDouble);
    printf("Read double: %lf\n", varDouble);

    // Reading multiple variables
    scanf("%i%f", &varInt, &varFloat);
    printf("Read multiple: %i and %f\n", varInt, varFloat);

    // Reading characters
    char znak;
    scanf(" %c", &znak); // Space before %c to skip whitespace
    printf("Read character: %c\n", znak);

    // Reading strings
    char tab[100];
    scanf("%s", tab);
    printf("Read string: %s\n", tab);

    // Reading strings with a specified maximum width
    scanf("%100s", tab);
    printf("Read string with width: %s\n", tab);

    // Reading a character and a string
    scanf(" %c%100s", &znak, tab);
    printf("Read character and string: %c and %s\n", znak, tab);

    // Reading without skipping whitespace
    scanf("%c", &znak);
    printf("Read without skipping whitespace: %c\n", znak);

    // Forcing to skip whitespace
    scanf(" %c", &znak);
    printf("Read with skipping whitespace: %c\n", znak);

    // Discarding a character
    znak = getchar();
    ungetc(znak, stdin);
    znak = getchar();
    printf("Discarded character: %c\n", znak);

    // Writing to the error stream
    fprintf(stderr, "Kom. o bledzie\n");

    return 0;
}

// Equivalent Operations in C++

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Printing integers
    cout << 19 << endl;

    // Printing integers in hexadecimal
    cout << hex << 19 << endl;

    // Printing floating-point numbers
    cout << 19.0 << endl;

    // Printing a variable of type double
    double var = 19.0;
    cout << var << endl;

    // Printing floating-point numbers with a field width
    cout << setw(11) << 3.0 << endl;

    // Printing floating-point numbers with a specified precision
    cout << setw(11) << setprecision(3) << 3.1234 << endl;

    // Printing a combination of a string, a floating-point number, and a character
    cout << "Napis" << 9.0 << 'z' << endl;

    // Reading integers
    int varInt;
    cin >> varInt;
    cout << "Read integer: " << varInt << endl;

    // Reading floating-point numbers
    float varFloat;
    cin >> varFloat;
    cout << "Read float: " << varFloat << endl;

    // Reading double precision numbers
    double varDouble;
    cin >> varDouble;
    cout << "Read double: " << varDouble << endl;

    // Reading multiple variables
    cin >> varInt >> varFloat;
    cout << "Read multiple: " << varInt << " and " << varFloat << endl;

    // Reading characters
    char znak;
    cin >> znak;
    cout << "Read character: " << znak << endl;

    // Reading strings
    char tab[100];
    cin >> tab;
    cout << "Read string: " << tab << endl;

    // Reading strings with a specified maximum width
    cin >> setw(sizeof(tab)) >> tab;
    cout << "Read string with width: " << tab << endl;

    // Reading a character and a string
    cin >> znak >> setw(sizeof(tab)) >> tab;
    cout << "Read character and string: " << znak << " and " << tab << endl;

    // Reading without skipping whitespace
    cin >> noskipws >> znak;
    cout << "Read without skipping whitespace: " << znak << endl;

    // Forcing to skip whitespace
    cin >> skipws >> znak;
    cout << "Read with skipping whitespace: " << znak << endl;

    // Discarding a character
    cin.get(znak);
    cin.unget();
    cin.get(znak);
    cout << "Discarded character: " << znak << endl;

    // Writing to the error stream
    cerr << "Komunikat o bledzie" << endl;

    return 0;
}
