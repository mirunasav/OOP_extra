//
// Created by Miruna Savin on 5/29/2022.
//

#include "IntegerData.h"
#include "Entry.h"
#include <iostream>
#include <string>
IntegerData::IntegerData(std::string name, std::string value): Entry (name)
{
    this->value = stoi(value);
}
void IntegerData::Add (std::string toAdd) {
    this->value += 1;
}
bool IntegerData::Substract (int toSubstract) {

    if(this->value < toSubstract )
    {
        std::cout<<"IntegerData: len("<<this->value<<") < "<<toSubstract<<'\n';
        return false;
    }
    else
        this->value = this->value  - 5;
    return true;

}


void IntegerData::Print() {
    std::cout<<this->name<<" = "<<this->value<<';';

}