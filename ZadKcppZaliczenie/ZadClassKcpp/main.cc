/**
 * \author: Bartosz Krawczyk
HOW TO CREATE:
    g++ -I include -o main.exe src/*.cc main.cc


HOW TO RUN:
    ./main.exe
*/

#include "Menu.h"

int main() {
    Menu menu;
    menu.run();
    return 0;
}
