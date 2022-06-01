//
// Created by Miruna Savin on 6/1/2022.
//

#include "Opel.h"
#include <string>
void Opel::setCapacitate(int capacitate)
{
    this->capacitate=capacitate;
}
void  Opel::setCuloare (std::string culoare)
{
    this->culoare=culoare;
}
void  Opel::setAnFabricatie(int an)
{
    this->anFabricatie = an;
}
int  Opel::getAnFabricatie()
{
    return this->anFabricatie;
}
int  Opel::getCapacitate()
{
    return this->capacitate;
}
std::string  Opel::getCuloare()
{
    return this->culoare;
}
std::string Opel::getName()
{
    return "Opel";
}