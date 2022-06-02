//
// Created by Miruna Savin on 6/2/2022.
//

#ifndef AGENCY_UML_APARTMENTADVERTISMENT_H
#define AGENCY_UML_APARTMENTADVERTISMENT_H
#include "Advertisment.h"

class ApartmentAdvertisment :public Advertisment {
private:
    int atLevel;
public:
    ApartmentAdvertisment(int surface, int price, int level)
    {
        this->surface = surface;
        this->price= price;
        this->atLevel = level;
    }
    void SetLevel(int lvl)
    {
        this->atLevel = lvl;
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
        std::cout<<"     Apartment at "<<this->atLevel<<"-th level, with a surface of "<<this->surface<<
                 " square meters, that costs "<<this->price<<" dollars"<<"."<<'\n';
    }

};


#endif //AGENCY_UML_APARTMENTADVERTISMENT_H
