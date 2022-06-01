//
// Created by Miruna Savin on 6/1/2022.
//

#ifndef MASINI_ORAS_UML_SUV_H
#define MASINI_ORAS_UML_SUV_H
#include<iostream>
#include <string>
#include "Masina.h"

class SUV:public Masina {
public:
    virtual int getConsum() = 0;
};


#endif //MASINI_ORAS_UML_SUV_H
