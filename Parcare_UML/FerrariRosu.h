//
// Created by Miruna Savin on 5/30/2022.
//

#ifndef PARCARE_UML_FERRARIROSU_H
#define PARCARE_UML_FERRARIROSU_H
#include "Masina.h"
#include<iostream>
#include <string>
class FerrariRosu :public Masina {
public:

    std::string GetColor() override;
    std::string GetName() override;

};



#endif //PARCARE_UML_FERRARIROSU_H
