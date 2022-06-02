//
// Created by Miruna Savin on 6/1/2022.
//

#ifndef TERITORIU_UML_TERITORIU_H
#define TERITORIU_UML_TERITORIU_H

#include <string>
class Teritoriu {
protected:
    std::string name;
    int suprafata;
public:
    virtual void Afiseaza() = 0;
    virtual int CalculeazaSuprafata() = 0;

};


#endif //TERITORIU_UML_TERITORIU_H
