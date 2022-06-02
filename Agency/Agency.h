//
// Created by Miruna Savin on 6/2/2022.
//

#ifndef AGENCY_UML_AGENCY_H
#define AGENCY_UML_AGENCY_H

#include "Advertisment.h"
#include <list>
#include <cstring>
class Agency {
private:
    const char* name;
    std::list < Advertisment* > ads;
public:
    Agency (char const* string)
    {
        this->name = new  char [strlen(string)+1];
        this->name = string;
    }
    void AddAdvertisment(Advertisment* Add)
    {
        this->ads.push_back(Add);
    }
    void PrintOffers(int mins, int maxp)
    {
        bool found = false;
        for (auto x : this->ads)
        {
            if(x->GetSurface() > mins && x->GetPrice() < maxp) {
                x->PrintInfo();
                found = true;
            }
        }
        if(!found)
            std::cout<<"Agency "<<this->name<<" could not find any offer for the criteria"
            <<'\n'<<"     min surface = "<<mins<<'\n'<<"     max price = "<< maxp<<'\n';

    }

};


#endif //AGENCY_UML_AGENCY_H
