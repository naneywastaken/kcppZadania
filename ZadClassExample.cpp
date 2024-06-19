/** 1.1
  * \author: Bartosz Krawczyk
  * \date 17/05/2024
  * \brief Class in C++
  */

/*
Napisac prosty program z jedna klasa. Wszystko zawarte w jednym pliku: klasa oraz definicje funkcji. 
Definicje funkcji moga byc w klasie lub poza nia. 
Klasa oparta o przyklad: KviCar.cc - nazwac program: ZadClassExample.cc
*/

#include <iostream>

class KviCar
{
  public:
    /** Default constructor **/
    KviCar() : fPlate(0), fFakePlate(0), fColor(0) {}

    /** Default destructor **/
    ~KviCar() {}

    /** Modifiers **/
    void SetPlate(int rplate)       { fPlate     = rplate; }
    void SetFakePlate(int fplate)   { fFakePlate = fplate; }
    void SetColor(int color)        { fColor     = color; }

    /** Accessors **/
    int GetPlate()     const { return fPlate; }
    int GetFakePlate() const { return fFakePlate; }
    int GetColor()     const { return fColor; }

    void Print() const {
        std::cout << "Plate: " << fPlate << std::endl;
        std::cout << "Fake Plate: " << fFakePlate << std::endl;
        std::cout << "Color: " << fColor << std::endl;
    }

  private:
    int fPlate;
    int fFakePlate;
    int fColor;
};

int main() {
    KviCar car;

    car.SetPlate(1234);
    car.SetFakePlate(5678);
    car.SetColor(9);

    car.Print();

    return 0;
}
