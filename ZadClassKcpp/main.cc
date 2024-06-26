/*
g++ -I include -o main.exe src/*.cc main.cc
./main.exe
*/

#include "Menu.h"

int main() {
    Menu menu;
    menu.run();
    return 0;
}
