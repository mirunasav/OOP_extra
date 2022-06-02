//
// Created by Miruna Savin on 6/2/2022.
//

#ifndef AGENCY_UML_ADVERTISMENT_H
#define AGENCY_UML_ADVERTISMENT_H
#include <iostream>

class Advertisment {
protected:
    int surface ;
    int price ;
public:
    Advertisment()
    {
        this->surface = 0;
        this->price = 0;
    }
   virtual void SetSurface (int s) = 0;
    virtual int GetSurface()= 0;
    virtual void SetPrice (int p) = 0;
    virtual int GetPrice()= 0;
    virtual void PrintInfo()= 0;

};


#endif //AGENCY_UML_ADVERTISMENT_H
