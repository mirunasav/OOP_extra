//
// Created by Miruna Savin on 5/29/2022.
//

#ifndef UML_COS_CUMPARATURI_FOOD_H
#define UML_COS_CUMPARATURI_FOOD_H

#include <iostream>
#include <string>
#include "Item.h"
class Food :public Item {
private:
    float quantity = 0;
public:
    void setQuantity (float quantity)
    {
        this->quantity = quantity;
    }
    std::string getInfo() override
    {
        return this->getName() + ' ' + std::to_string(quantity);

    }
    ///functiile astea, getName() si setName(), care sunt in clasa Item, dar nu sunt scrise cu italice
    ///si deci nu sunt virtuale, mai tb implementate in clasele derivate?

    ////sau food si misc pot folosi aceste functii fara sa fie implementate in clasele lor, pt ca
    ///sunt derivate din item?
  /*  std::string getName()
    {
        return Item::getName();
    }
    void setName (std::string name)
    {
        Item::setName(name);
    }
*/
};


#endif //UML_COS_CUMPARATURI_FOOD_H
