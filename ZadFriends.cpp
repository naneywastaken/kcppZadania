/** 5.5
  * \author: Bartosz Krawczyk
  * \date 18/06/2024
  * \brief Klasy
  */

/*
Sprawdzic dzialanie przyjazni klas:
- Klasa B zaprzyjazniona z klasa A ma ma dostep do skladnikow prywatnych
- Czy klasa A w tym samym momencie moze byc takze zaprzyjazniona z klasa B?    

Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
https://www.geeksforgeeks.org/friend-class-function-cpp
*/

#include <iostream>
using namespace std;

// Forward declaration of class B
class B;

class A {
private:
    int privateA;

public:
    A() : privateA(10) {}

    // Declare class B as a friend of class A
    friend class B;

    void showBPrivateMember(const B& b);
};

class B {
private:
    int privateB;

public:
    B() : privateB(20) {}

    // Method to access private member of class A
    void showAPrivateMember(const A& a) {
        cout << "Accessing A's private member from B: " << a.privateA << endl;
    }

    // Declare a friend function in class A that accesses B's private member
    friend void A::showBPrivateMember(const B& b);
};

void A::showBPrivateMember(const B& b) {
    cout << "Accessing B's private member from A's friend function: " << b.privateB << endl;
}

int main() {
    A a;
    B b;

    // B accessing A's private member
    b.showAPrivateMember(a);

    // A accessing B's private member through its friend function
    a.showBPrivateMember(b);

    return 0;
}
