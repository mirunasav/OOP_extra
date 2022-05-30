//
// Created by Miruna Savin on 5/29/2022.
//

#ifndef UML_PROBLEMA_3_1_NUMBER_H
#define UML_PROBLEMA_3_1_NUMBER_H

#include <iostream>
#include "Printer.h"
using namespace std;

class Number {
private:
    int number;
    int count = 0;
    Printer * printers[100];
public:
     Number (int value): number (value) {};
     operator int();
    Number& operator + ( Number *n);
     Number& operator - ( Number *n);
     Number& operator * ( Number*n);
     Number& operator / ( Number *n);
     Number& operator += (Printer* prnt);
    void Print();



};


#endif //UML_PROBLEMA_3_1_NUMBER_H
