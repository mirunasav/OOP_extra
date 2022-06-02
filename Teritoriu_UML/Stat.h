//
// Created by Miruna Savin on 6/1/2022.
//

#ifndef TERITORIU_UML_STAT_H
#define TERITORIU_UML_STAT_H
#include "Teritoriu.h"
#include "Munti.h"
#include <list>
#include <iostream>
class Stat : public Teritoriu{
private:
   std:: list <Munti>  munti;
public:
    Stat (std::string name, int surface)
    {
        this->name = name;
        this->suprafata= surface;
    }
    void Afiseaza() override
    {
        std::cout<<"Stat: "<<this->name<<"("<<this->suprafata<<"km2)"<<'\n';

        for (auto x : this->munti) {
            std::cout << "      ";
            x.Afiseaza();
        }

    }
    int CalculeazaSuprafata() override
    {
        return this->suprafata;
    }
    void Add (Munti  munte)
    {
        this->munti.push_back(munte);
    }
    int SuprafataMunti()
    {
        int surface = 0;
        for (auto x : this->munti)
            surface+=x.CalculeazaSuprafata();
        return surface;
    }
};


#endif //TERITORIU_UML_STAT_H
