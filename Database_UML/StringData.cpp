//
// Created by Miruna Savin on 5/29/2022.
//

#include "StringData.h"
#include "Entry.h"
StringData::StringData( std::string name, std::string value) : Entry(name) {
    this->value = value;
}
void  StringData:: Add (std::string toAdd)
{
    this->value += "1";
}
bool StringData:: Substract (int toSubstract)
{
    if(this->value.size() < toSubstract )
    {
        std::cout<<"StringData: len("<<this->value<<") < "<<toSubstract<<'\n';
    }
    else
        this->value = this->value.substr(0, this->value.size()-5) ;
    return true;
}
void StringData:: Print()
{
    std::cout<<this->name<<" = "<<this->value<<';';
}