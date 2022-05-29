//
// Created by Miruna Savin on 5/29/2022.
//

#include "Database.h"
#include "Entry.h"
#include "StringData.h"
#include "IntegerData.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
Database& Database:: operator+=(Entry *newEntry)
{
    this->entry.push_back(newEntry);
    return *this;
}

Database & Database::operator-=(std::string string)
{

    for(int i = 0; i<this->entry.size(); i++)
    {
        if(this->entry[i]->GetName() == string)
            this->entry.erase(this->entry.begin()+i);
    }
    return *this;
}
Database::Iterator ::Iterator(int index, Database *pDatabase) :index(index),
pDatabase(pDatabase){

}
bool Database ::Iterator::operator != (Iterator it)
{
    if(this->index != it.index)
        return true;
    return false;
}
Entry* Database::Iterator::operator *  ()const
{

    return this->pDatabase->entry[this->index];
}
Database::Iterator& Database::Iterator::operator ++()
{
    this->index ++;
    return *this;
}
Database::Iterator Database::begin()
{
    return Iterator(0, this);
}
Database::Iterator Database:: end()
{
    return Iterator (this->entry.size(), this);
}
void Database:: Print()
{
    for (auto x : entry)
    {
       x->Print();
    }
    cout<<'\n';
}