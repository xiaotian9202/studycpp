#include <iostream>

int area(int length, int width);

int main()
{
    int x0 = arean(7, 2);       // error: ‘arean’ was not declared in this scope; did you mean ‘area’?

    int x1 = area(7);       // error: too few arguments to function ‘int area(int, int)’

    int x2 = area("seven", 2);  // error: invalid conversion from ‘const char*’ to ‘int’

    int x3 = area(6.7, 2);         // error: conversion from ‘double’ to ‘int’ changes value from ‘6.7000000000000002e+0’ to ‘6’

}