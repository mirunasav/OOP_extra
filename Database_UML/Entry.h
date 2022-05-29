//
// Created by Miruna Savin on 5/29/2022.
//

#ifndef UML_DATABASE_ENTRY_H
#define UML_DATABASE_ENTRY_H
#include <list>
#include <iostream>
#include <string>

class Entry {
protected:
    std::string name;
public:
    Entry (std::string name);
    std::string GetName();
    virtual  void Add (std::string toAdd) = 0;
    virtual bool Substract (int toSubstract) = 0;
    virtual void Print() = 0;

};


#endif //UML_DATABASE_ENTRY_H
