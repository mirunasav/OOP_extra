//
// Created by Miruna Savin on 5/30/2022.
//

#ifndef PARCARE_UML_PARCARE_H
#define PARCARE_UML_PARCARE_H
#include "Masina.h"
#include <iostream>
#include <string>
#include <list>
using namespace  std;

class Parcare {
private:
    int maxCapacity;
    int count ;
    list <Masina * > masini;
public:
    void Create(int maxCapacity);
    bool Add (Masina * masina);
    void RemoveByName (string name);
    int GetCount() const;
    bool IsFull() const;
    void ShowAll() const;
    void ShowByColor(string color) const;
};


#endif //PARCARE_UML_PARCARE_H
