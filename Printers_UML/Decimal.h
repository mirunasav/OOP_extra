//
// Created by Miruna Savin on 5/29/2022.
//

#ifndef UML_PROBLEMA_3_1_DECIMAL_H
#define UML_PROBLEMA_3_1_DECIMAL_H

#include "Printer.h"
#include <string>

class Decimal :public Printer{
public:
    string GetFormatName () override;
    string FormatNumber (int number) override;
};


#endif //UML_PROBLEMA_3_1_DECIMAL_H
