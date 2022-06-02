//
// Created by Miruna Savin on 6/2/2022.
//

#ifndef AGENCY_UML_HOUSEADVERTISMENT_H
#define AGENCY_UML_HOUSEADVERTISMENT_H
#include "Advertisment.h"

class HouseAdvertisment: public Advertisment {
private:
    int nrFloors;
public:
    HouseAdvertisment(int surface, int price, int floors)
    {
        this->surface = surface;
        this->price = price;
        this->nrFloors = floors;
    }

    void SetNrFloors(int f)
    {
        this->nrFloors = f;
    }
    void SetSurface (int s) override
    {
        this->surface = s;

    }
    int GetSurface()override
    {
        return this->surface;
    }
    void SetPrice (int p)override
    {
        this->price = p;
    }
    int GetPrice()override
    {
        return this->price;
    }
    void PrintInfo()override
    {
        std::cout<<"     House with "<<this->nrFloors<<" floors, with a surface of "<<this->surface<<
        " square meters, that costs "<<this->price<<" dollars"<<"."<<'\n';
    }
};


#endif //AGENCY_UML_HOUSEADVERTISMENT_H
