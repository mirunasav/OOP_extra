//
// Created by Miruna Savin on 5/30/2022.
//

#include "Parcare.h"
#include <list>
#include<iostream>
void Parcare::Create(int maxCapacity)
{
    this->maxCapacity = maxCapacity;
    this->count = 0;
}
bool Parcare::Add (Masina * masina)
{
    if(this->count >= this->maxCapacity)
        return false;
    masini.push_back(masina);
    this->count++;
    return true;
}
void Parcare:: RemoveByName (string name)
{
    for (auto it = this->masini.begin(); it!=this->masini.end(); ++it)
    {
        if((*it)->GetName() ==name) {
            auto current = it--;
            this->masini.erase(current);
            this->count--;

        }
    }


}
int Parcare::GetCount() const
{
    return this->count;
}
bool Parcare::IsFull() const
{
    return this->count  == this->maxCapacity;

}
void Parcare::ShowAll ()const
{
    std::cout<<"SHOW-ALL:";
    for(auto x : masini)
    {
       std:: cout<<x->GetName()<<x->GetColor()<<", ";
    }
    std::cout<<'\n';
}
void Parcare::ShowByColor(string color) const
{
    std::cout<<"SHOW-COLOR("<<color<<"):";
    for (auto x : masini)
    {
        if (x->GetColor()==("("+color+")"))
          std::cout<<  x->GetName()<<", ";

    }
    std::cout<<'\n';
}