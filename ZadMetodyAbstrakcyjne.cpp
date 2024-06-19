/** 5.6
  * \author: Bartosz Krawczyk
  * \date 19/06/2024
  * \brief Klasy
  */

/*
Bazujac na pliku LClassMetodyAbstrakcyjne.cc stworz program ktory oblicza:
- obwod, pole powierzchnidla:
- kwadrat, trojkat, prostokat, kolo (jako klasy dziedziczace po klasie abstrakcyjnej Figura),
oraz funkcja Dystans (dodatkowo w klasie Kolo):  
    Jesli rzad podaje, ze na kazdego obywatela w sklepie (kosciele etc) 
    przypada X metrow kwadratowych (argument przekazywany do funkcji)  
    to w jakiej odleglosci (promieniu - to ma funkcja Dystans zwracac) 
    moze znalezc sie nastepna osoba.
Nazwij program: ZadMetodyAbstrakcyjne.cc 
*/

#include <iostream>
#include <cmath>
using namespace std;

// Abstract base class
class Figure {
public:
    virtual double circumference() const = 0;
    virtual double surfaceArea() const = 0;
    virtual ~Figure() {}
};

// Derived class for Square
class Square : public Figure {
private:
    double side;
public:
    Square(double side) : side(side) {}
    double circumference() const override {
        return 4 * side;
    }
    double surfaceArea() const override {
        return side * side;
    }
};

// Derived class for Triangle
class Triangle : public Figure {
private:
    double a, b, c;
public:
    Triangle(double a, double b, double c) : a(a), b(b), c(c) {}
    double circumference() const override {
        return a + b + c;
    }
    double surfaceArea() const override {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

// Derived class for Rectangle
class Rectangle : public Figure {
private:
    double length, width;
public:
    Rectangle(double length, double width) : length(length), width(width) {}
    double circumference() const override {
        return 2 * (length + width);
    }
    double surfaceArea() const override {
        return length * width;
    }
};

// Derived class for Circle
class Circle : public Figure {
private:
    double radius;
public:
    Circle(double radius) : radius(radius) {}
    double circumference() const override {
        return 2 * M_PI * radius;
    }
    double surfaceArea() const override {
        return M_PI * radius * radius;
    }
    double Distance(double areaPerPerson) const {
        return sqrt(areaPerPerson / M_PI);
    }
};

int main() {
    Figure* figures[4];
    
    figures[0] = new Square(5);
    figures[1] = new Triangle(3, 4, 5);
    figures[2] = new Rectangle(4, 6);
    figures[3] = new Circle(3);
    
    for (int i = 0; i < 4; ++i) {
        cout << "Figure " << i+1 << ":" << endl;
        cout << "Circumference: " << figures[i]->circumference() << endl;
        cout << "Surface Area: " << figures[i]->surfaceArea() << endl;
        cout << endl;
    }

    // Example usage of Distance function in Circle
    Circle* circle = dynamic_cast<Circle*>(figures[3]);
    if (circle) {
        double areaPerPerson = 4.0; // Example area per person
        cout << "Distance for each person to maintain area of " << areaPerPerson << " square meters: " << circle->Distance(areaPerPerson) << " meters" << endl;
    }

    // Clean up
    for (int i = 0; i < 4; ++i) {
        delete figures[i];
    }

    return 0;
}
