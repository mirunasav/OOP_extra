//
// Created by Miruna Savin on 5/29/2022.
//

#ifndef UML_COS_CUMPARATURI_MISC_H
#define UML_COS_CUMPARATURI_MISC_H


#include <iostream>
#include <string>
#include "Item.h"

class Misc : public Item {
private:
    int count;
public:
  /*  std::string getName()
    {
        return Item::getName();
    }
   void setName (std::string name)
   {
       Item::setName(name);
   }*/

    std::string getInfo() override
    {
        return this->getName() + ' ' + std::to_string(count);
    }
    void setCount (int count)
    {
        this->count = count;
    }


};


#endif //UML_COS_CUMPARATURI_MISC_H
