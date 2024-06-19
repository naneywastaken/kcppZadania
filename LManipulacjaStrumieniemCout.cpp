/** 4.1
  * \author: Bartosz Krawczyk
  * \date 18/06/2024
  * \brief Operacje wejscia/wyjscia
  */

/*
Napisz program z przykladami manipulacji strumieniem cout:
- setw, setprecision, setfill, fixed, scientific, hex, dec... etc (patrz plik kcpp02.pdf)
- nazwac program LManipulacjaStrumieniemCout.cc  

Spraw aby na ekran wypisalo to co jest pomiedzy liniami ze znakami =:  
==================================================  
Wynika naszego dzialania: x.xxxxx jest niepoprawny ale:     
output:   xx.xxx    T:  x.xxx   
// float w = 16.0;    
output1:   x.xxxx   T: xx.xxxxx
output2:   x.xxxx   T: xx.xxxxxx
---------------------------------
average:  xx.xxxx   T: xx.xxxxxx
==================================================
- x.xxxx sa wynikami jakis dzialan, a nie sztucznie wstawionymi liczbami
- ustawienie liczb/wypisanie/sformatowanie wykonac uzywajac manipulatorow strumieniem (setw, setprecision, setfill etc), zamiast " " czy
*/

#include <iostream>
#include <iomanip>

int main() {
    // Demonstrating setw and setfill
    std::cout << "Demonstrating setw and setfill:" << std::endl;
    std::cout << std::setw(10) << std::setfill('*') << 123 << std::endl;
    std::cout << std::setw(10) << std::setfill('-') << 456 << std::endl;

    // Resetting to default fill character
    std::cout << std::setfill(' ');

    // Demonstrating setprecision and fixed
    std::cout << "\nDemonstrating setprecision and fixed:" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << 123.456789 << std::endl;
    std::cout << std::fixed << std::setprecision(5) << 123.456789 << std::endl;

    // Demonstrating scientific
    std::cout << "\nDemonstrating scientific:" << std::endl;
    std::cout << std::scientific << std::setprecision(2) << 123.456789 << std::endl;
    std::cout << std::scientific << std::setprecision(5) << 123.456789 << std::endl;

    // Resetting to default floating-point format
    std::cout.unsetf(std::ios::fixed | std::ios::scientific);

    // Demonstrating hex and dec
    std::cout << "\nDemonstrating hex and dec:" << std::endl;
    int number = 255;
    std::cout << "Decimal: " << std::dec << number << std::endl;
    std::cout << "Hexadecimal: " << std::hex << number << std::endl;
    std::cout << "Decimal: " << std::dec << number << std::endl;

    // Demonstrating showbase and uppercase
    std::cout << "\nDemonstrating showbase and uppercase:" << std::endl;
    std::cout << std::showbase << std::uppercase;
    std::cout << "Hexadecimal with showbase and uppercase: " << std::hex << number << std::endl;

    // Resetting to default
    std::cout << std::nouppercase << std::noshowbase << std::dec;

    return 0;
}
