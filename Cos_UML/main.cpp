#include <iostream>
#include "Food.h"
#include "Item.h"
#include "Misc.h"
#include "ShoppingList.h"
int main() {
    Food item1;
    item1.setName ("meat");
    item1.setQuantity(1.5f);

    Misc item2;
    item2.setName("servetele");
    item2.setCount (3);
    ShoppingList L;
    L.additem(&item1);
    L.additem(&item2);
    L.printList();
    return 0;
}
