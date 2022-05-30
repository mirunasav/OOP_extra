//
// Created by Miruna Savin on 5/30/2022.
//

#ifndef PARCARE_UML_DACIA_H
#define PARCARE_UML_DACIA_H
#include "Masina.h"
#include<iostream>
#include <string>
class Dacia :public Masina {
private:
    std::string color;
    public:
    Dacia(std::string color): color(color){}
    std::string GetColor() override;
    std::string GetName() override;

    };



#endif //PARCARE_UML_DACIA_H
