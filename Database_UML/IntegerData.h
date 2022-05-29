//
// Created by Miruna Savin on 5/29/2022.
//

#ifndef UML_DATABASE_INTEGERDATA_H
#define UML_DATABASE_INTEGERDATA_H
#include "Entry.h"
#include <iostream>
#include <string>
class IntegerData :public Entry{
    int value;
public:
    IntegerData(std::string name, std::string value);
    void Add (std::string toAdd) override; //din Entry
    bool Substract (int toSubstract) override; //din Entry
    void Print()  override; //din Entry


};

#endif //UML_DATABASE_INTEGERDATA_H
