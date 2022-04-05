#include <iostream>
#include "Invoice.h"
#include "Item.h"



Invoice::Invoice(long long sNIP, long long bNIP){
    seller_NIP = sNIP;
    buyer_NIP = bNIP;
    items = {};
}

void Invoice::add_item(Item item){
    items.push_back(item);
}

std::ostream& operator<<(std::ostream &str, Invoice &x){
    str<<"\n------------------VAT invoice------------------"<<"\n"
      <<"==============================================="<<"\n"
     <<"Seller: "<<x.seller_NIP<<"\t"<<"Buyer: "<<x.buyer_NIP<<"\n"
    <<"                  c.j. VAT   il.    net   total"<<"\n";
    float tax,sum,total_sum;
    for(unsigned int i=0; i<x.items.size(); i++){
        if(x.items[i].tax_type=='A'){
            tax = 1.23;
        }
        else if(x.items[i].tax_type=='B'){
            tax = 1.08;
        }
        else{
            tax = 1;
        }
        str<<i+1<<". "<<x.items[i].name<<"   | "<<x.items[i].unit_price<<"\t"<<x.items[i].tax_type<<" | "<<x.items[i].amount<<" | "<<x.items[i].unit_price*x.items[i].amount<<" | "<<(x.items[i].amount*x.items[i].unit_price)*tax<<"\n";
        sum+=x.items[i].unit_price;
        total_sum+=(x.items[i].amount*x.items[i].unit_price)*tax;
    }
    str<<"\n------------------------------------ TOTAL ----\n"
      <<"                                   "<<sum<<" | "<<total_sum<<"\n";


    return str;

}
