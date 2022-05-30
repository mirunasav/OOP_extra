//
// Created by Miruna Savin on 5/30/2022.
//

#ifndef PARCARE_UML_MASINA_H
#define PARCARE_UML_MASINA_H

#include <iostream>
#include <string>
class Masina {
public:
    virtual std::string GetColor() = 0;
    virtual std::string GetName() = 0;
};


#endif //PARCARE_UML_MASINA_H
