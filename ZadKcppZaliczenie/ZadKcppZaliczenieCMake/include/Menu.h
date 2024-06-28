#ifndef MENU_H
#define MENU_H

#include "ZadKcpp.h"

class Menu {
public:
    Menu();
    ~Menu();
    void run();
    void chooseProgram(short choice, ZadKcpp& zadKcpp);

private:
    bool isRunning;
};

#endif // MENU_H
