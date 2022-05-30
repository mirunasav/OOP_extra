//
// Created by Miruna Savin on 5/29/2022.
//

#include "Number.h"

Number::operator int()
{
    return this->number;
}
Number& Number::operator + ( Number *n)
{
    this->number = this->number + n->number;
    return *this;
}
Number& Number::operator - ( Number *n)
{
    this->number = this->number - n->number;
    return *this;
}
Number& Number::operator * ( Number*n)
{
    this->number*= n->number;
    return *this;
}
Number& Number::operator / ( Number *n)
{
    this->number /= n->number;
    return *this;
}
Number& Number:: operator += (Printer* prnt)
{

    this->printers[this->count] = prnt;
    this->count++;
    return *this;
}

void Number::Print(){
    for(int i = 0; i<this->count; i++)
       std::cout<<"Format: "<< printers[i]->GetFormatName()
       <<" Value: "<<printers[i]->FormatNumber(this->number)<<'\n';
}