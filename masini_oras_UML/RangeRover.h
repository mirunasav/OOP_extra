//
// Created by Miruna Savin on 6/1/2022.
//

#ifndef MASINI_ORAS_UML_RANGEROVER_H
#define MASINI_ORAS_UML_RANGEROVER_H
#include<iostream>
#include <string>
#include "SUV.h"
class RangeRover:public SUV {
private:
    int consum;
public:
    void setConsum(int consum);
    int getConsum() override;

};


#endif //MASINI_ORAS_UML_RANGEROVER_H
