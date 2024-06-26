#ifndef MENU_H
#define MENU_H

#include "MethodsCollection.h"

class Menu {
public:
    Menu();
    ~Menu();
    void run();
    void chooseProgram(short choice, MethodsCollection& methodsCollection);

private:
    bool isRunning;
};

#endif // MENU_H
