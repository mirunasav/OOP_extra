//
// Created by Miruna Savin on 5/29/2022.
//

#ifndef UML_COS_CUMPARATURI_ITEM_H
#define UML_COS_CUMPARATURI_ITEM_H
#include <iostream>
#include<string>

class Item {
private:
    std::string name;

public:
    std::string getName()
    {
        return this->name;
    }
    virtual std::string getInfo() = 0;
    void setName (std::string name)
    {
        this->name = name;
    }
};


#endif //UML_COS_CUMPARATURI_ITEM_H
