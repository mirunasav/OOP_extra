//
// Created by Miruna Savin on 6/1/2022.
//

#ifndef MASINI_ORAS_UML_OPEL_H
#define MASINI_ORAS_UML_OPEL_H

#include "MasinaOras.h"
#include <iostream>
#include <string>

class Opel : public MasinaOras {
private:
    int capacitate;
    std::string culoare;
    int anFabricatie;
public:
    void setCapacitate(int capacitate);
    void setCuloare (std::string culoare);
    void setAnFabricatie(int an);
    int getAnFabricatie();
    int getCapacitate() override;
    std::string getCuloare() override;
    std::string getName() override;


};


#endif //MASINI_ORAS_UML_OPEL_H
