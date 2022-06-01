//
// Created by Miruna Savin on 6/1/2022.
//

#ifndef MASINI_ORAS_UML_MASINAORAS_H
#define MASINI_ORAS_UML_MASINAORAS_H

#include<iostream>
#include <string>
#include "Masina.h"
class MasinaOras :public Masina{
public:
    virtual int getCapacitate () = 0;
    virtual std::string getCuloare () = 0;
};


#endif //MASINI_ORAS_UML_MASINAORAS_H
