//
// Created by Miruna Savin on 5/29/2022.
//

#ifndef UML_PROBLEMA_3_1_HEXAZECIMAL_H
#define UML_PROBLEMA_3_1_HEXAZECIMAL_H
#include "Printer.h"
#include <string>
using namespace std;

class Hexazecimal :public Printer{
public:
    string GetFormatName () override;
    string FormatNumber (int number) override;
};


#endif //UML_PROBLEMA_3_1_HEXAZECIMAL_H
