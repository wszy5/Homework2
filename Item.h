#ifndef ITEM_H
#define ITEM_H

#include <iostream>

class Item{

public:
    std::string name;
    float unit_price;
    char tax_type;
    int amount;

    Item(std::string n, float p,char t, int a);

};

#endif // ITEM_H
