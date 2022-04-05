#include <iostream>
#include "Time.h"
#include "Invoice.h"
#include "Item.h"

using namespace std;

int main()
{
    Time t1(200);
    cout << t1 << endl; // displays 03m:20s
    Time t2;
    cout<<t2;
    Item i1("glasses",21.34,'A',4);

    Invoice inv(7770003699, 0124334);
    inv.add_item(Item("M3 screw", 0.37, 'A', 100));
    inv.add_item(Item("2 mm drill", 2.54, 'B', 2));
    cout<<inv;
    return 0;
}
