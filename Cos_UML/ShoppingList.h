//
// Created by Miruna Savin on 5/29/2022.
//

#ifndef UML_COS_CUMPARATURI_SHOPPINGLIST_H
#define UML_COS_CUMPARATURI_SHOPPINGLIST_H

#include "Item.h"
#include "Food.h"
#include "Misc.h"
#include <list>
#include <iostream>
using namespace std;

class ShoppingList {
private:
   list <Item*> items;
public:
    void additem( Item * item)
    {
        items.push_back(item);
    }
    void printList()
    {
        for (auto x : items)
        {
            std::cout<< x->getInfo()<<'\n';
        }
    }
};


#endif //UML_COS_CUMPARATURI_SHOPPINGLIST_H
