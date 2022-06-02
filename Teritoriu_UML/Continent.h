//
// Created by Miruna Savin on 6/1/2022.
//

#ifndef TERITORIU_UML_CONTINENT_H
#define TERITORIU_UML_CONTINENT_H

#include "Teritoriu.h"
#include "Stat.h"
#include <list>
#include <iostream>
class Continent : public Teritoriu {
private:
    std::list <Stat> state;
public:
    Continent (std::string name)
    {
        this->name = name;
    }
    void AfiseazaStateCuMunti()
    {

        for (auto x : this->state)
        {
            int surface  = x.CalculeazaSuprafata() ;
            surface*=30;
            surface/=100;
            if(x.SuprafataMunti() > surface)
                x.Afiseaza();
        }

    }
    void Afiseaza() override
    {
        std::cout<<"Continent: "<<this->name<<'\n';
        for(auto x : state)
        {
            x.Afiseaza();
        }
    }
    int CalculeazaSuprafata() override
    {
        int marime = 0;
        for (auto x: this->state)
        {
            marime+= x.CalculeazaSuprafata();
        }
        return marime;
    }
    void Add (Stat stat)
    {
        this->state.push_back(stat);
    }
};


#endif //TERITORIU_UML_CONTINENT_H
