/** 5.1
  * \author: Bartosz Krawczyk
  * \date 18/06/2024
  * \brief Klasy
  */

/*
Napisz prosty program z klasa
- metody deklarowane i definiowane w klasie
- metody deklarowane w klasie, a definiowane poza klasa
- zastosowanie 3 sekcji: public, private, protected
- zmienne w kazdej z sekcji
- funkcje, ktore maja dostep do zmiennych z sekcji protected i private
- funkcje inline
- nazwij program: ZadClass.
*/

#include <iostream>
#include <string>

class Example {
public:
    // Public variable
    std::string publicVar;

    // Constructor
    Example(std::string pub, int prot, double priv) : publicVar(pub), protectedVar(prot), privateVar(priv) {}

    // Method declared and defined in the class (inline function)
    void showPublic() {
        std::cout << "Public Variable: " << publicVar << std::endl;
    }

    // Method declared in the class and defined outside the class
    void showProtected();

    // Inline function accessing private variable
    void showPrivate() const;

protected:
    // Protected variable
    int protectedVar;

    // Method accessing protected variable (defined inside the class)
    inline void showProtectedVar() {
        std::cout << "Protected Variable: " << protectedVar << std::endl;
    }

private:
    // Private variable
    double privateVar;

    // Method accessing private variable (defined outside the class)
    void showPrivateVar() const;
};

// Method declared in the class and defined outside the class
void Example::showProtected() {
    std::cout << "Accessing protected variable from public method: " << protectedVar << std::endl;
}

// Method accessing private variable (defined outside the class)
void Example::showPrivateVar() const {
    std::cout << "Private Variable: " << privateVar << std::endl;
}

// Inline function accessing private variable (defined outside the class)
void Example::showPrivate() const {
    showPrivateVar();
}

int main() {
    // Create an object of Example class
    Example example("Public", 42, 3.14);

    // Accessing public method
    example.showPublic();

    // Accessing public method that shows protected variable
    example.showProtected();

    // Accessing protected variable through a protected method
    // example.showProtectedVar(); // This would be an error, protected method cannot be accessed directly

    // Accessing private variable through an inline method
    example.showPrivate();

    return 0;
}
