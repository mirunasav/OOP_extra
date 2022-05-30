//
// Created by Miruna Savin on 5/29/2022.
//

#include "Hexazecimal.h"
#include "Printer.h"
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
string Hexazecimal:: GetFormatName (){
    return "Hexazecimal";
}


string Hexazecimal::FormatNumber (int number) {
    std::stringstream out;
    out << std::hex << std::setw(8) << std::setfill('0') << std::uppercase << number;
    return "0x" + out.str();
}
