//
// Created by Miruna Savin on 5/29/2022.
//

#include "Decimal.h"

#include "Printer.h"
#include <string>
#include <sstream>
using namespace std;
string Decimal:: GetFormatName (){
    return "Decimal";
}

string Decimal::FormatNumber (int number)
{
    std::string string;
    string = to_string(number);
    return string;
}