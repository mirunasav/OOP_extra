//
// Created by Miruna Savin on 5/29/2022.
//

#ifndef UML_PROBLEMA_3_1_PRINTER_H
#define UML_PROBLEMA_3_1_PRINTER_H
#include <iostream>
#include<string>
using namespace std;

class Printer {
public:
    virtual string GetFormatName() = 0;
    virtual string FormatNumber(int number) = 0;
};


#endif //UML_PROBLEMA_3_1_PRINTER_H
