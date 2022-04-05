#include "Item.h"


Item::Item(std::string n, float p,char t, int a){
    name = n;
    unit_price = p;
    tax_type = t;
    amount = a;
}
