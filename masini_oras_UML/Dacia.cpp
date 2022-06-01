//
// Created by Miruna Savin on 6/1/2022.
//

#include "Dacia.h"
#include <string>

void Dacia::setCapacitate(int capacitate)
{
    this->capacitate= capacitate;
}
void Dacia::setCuloare(std::string color)
{
    this->culoare = color;
}
int  Dacia::getCapacitate()
{
    return this->capacitate;
}
std::string  Dacia::getCuloare()
{
    return this->culoare;
}
std::string Dacia::getName()
{
    return "Dacia";
}