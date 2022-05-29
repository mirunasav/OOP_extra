//
// Created by Miruna Savin on 5/29/2022.
//

#ifndef UML_DATABASE_DATABASE_H
#define UML_DATABASE_DATABASE_H

#include <vector>
#include <iostream>
#include "Entry.h"
class Database {
private:
    std::vector<Entry *> entry;
public:
    Database &operator+=(Entry *newEntry);

    Database &operator-=(std::string string);

    class Iterator {
    private:
        int index;
        Database *pDatabase;
    public:
        Iterator(int index, Database *pDatabase);

        bool operator!=(Iterator it);

        Iterator &operator++();

        Entry *operator*() const;
    };
    Iterator begin();
    Iterator end();
    void Print();
}
;


#endif //UML_DATABASE_DATABASE_H
