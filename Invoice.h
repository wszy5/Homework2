#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include <vector>
#include "Item.h"

class Invoice{
public:

    long long seller_NIP;
    long long buyer_NIP;
    std::vector<Item> items;

    Invoice(long long sNIP, long long bNIP);
    void add_item(Item item);
    friend std::ostream& operator<<(std::ostream &str, Invoice &x);
};

#endif // INVOICE_H
