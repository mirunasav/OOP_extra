//
// Created by Miruna Savin on 6/1/2022.
//

#ifndef MASINI_ORAS_UML_DACIA_H
#define MASINI_ORAS_UML_DACIA_H
#include <iostream>
#include <string>
#include "MasinaOras.h"

class Dacia : public MasinaOras{
private:
    int capacitate;
    std::string culoare;
public:
    void setCapacitate(int capacitate);
    void setCuloare(std::string color);
    int  getCapacitate()override;
    std::string  getCuloare() override;
   std::string getName() override;


};


#endif //MASINI_ORAS_UML_DACIA_H
