//
// Created by Miruna Savin on 5/29/2022.
//

#include "Entry.h"
#include <iostream>
#include<string>
Entry::Entry (std::string name)
{
    this->name = name;
}
std::string Entry:: GetName()
{
    return this->name;
}
