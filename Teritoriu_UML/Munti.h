//
// Created by Miruna Savin on 6/1/2022.
//

#ifndef TERITORIU_UML_MUNTI_H
#define TERITORIU_UML_MUNTI_H

#include "Teritoriu.h"
#include <string>
#include <iostream>

class Munti : Teritoriu{
private:
    int altitudine;
public:
    Munti(std::string nume, int sup, int alt)
    {
        this->name = nume;
        this->suprafata = suprafata;
        this->altitudine=alt;
    }
    void Afiseaza() override
    {
        std::cout <<"Munte: "<<this->name<<"("<<this->altitudine<<"m)"<<'\n';
    }
    int CalculeazaSuprafata() override
    {
        return this->suprafata;
    }


};


#endif //TERITORIU_UML_MUNTI_H
