#ifndef ZADKCPP_H
#define ZADKCPP_H

class ZadKcpp {
public:
    ZadKcpp();
    ~ZadKcpp();

    void invokeMethod(int methodNumber);
    void displayMethodDescription(int methodNumber);

    void arrayManipulationExample();
    void returnTypesExample();
    void enumExample();
    void fileIOExample();
    void binaryToIntegerExample();

private:
    int returnValueByValue(int x);
    void returnValueByReference(int x, int& result);
    void returnValueByPointer(int x, int* result);
    void returnValueByArray(int x, int result[]);
};

#endif // ZADKCPP_H
