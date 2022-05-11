#include "./headerFiles/item.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool flag = false;

    if (flag == false)
    {
        string name = "Milk";
        float price = 3.90;
        int eisle = 2;

        Item i1(name, price, eisle);
        if (i1.getItemName() != name || i1.getEisleNum() != eisle || i1.getItemPrice() != price){
            cout << "The name of the item is " << i1.getItemName() << ", its supposed to be 'Milk'." << endl;
            cout << "The price of the item is " << i1.getItemPrice() << ", its supposed to be " << price << endl;
            cout << "The eisle number of the item is " << i1.getEisleNum() << ", its supposed to be  " << eisle <<  endl;
            flag = true;
        }
        
    }
    if (flag == false)
    {
        string name = "Weetbix";
        float price = 6.50;
        int eisle = 3;

        Item i1(name, price, eisle);
        if (i1.getItemName() != name || i1.getEisleNum() != eisle || i1.getItemPrice() != price){
            cout << "The name of the item is " << i1.getItemName() << ", its supposed to be " << name << endl;
            cout << "The price of the item is " << i1.getItemPrice() << ", its supposed to be " << price << endl;
            cout << "The eisle number of the item is " << i1.getEisleNum() << ", its supposed to be  " << eisle <<  endl;
            flag = true;
        }
        
    }
    if (flag == false)
    {
        string name = "Cream";
        float price = 4.00;
        int eisle = 2;

        Item i1(name, price, eisle);
        if (i1.getItemName() != name || i1.getEisleNum() != eisle || i1.getItemPrice() != price){
            cout << "The name of the item is " << i1.getItemName() << ", its supposed to be " << name << endl;
            cout << "The price of the item is " << i1.getItemPrice() << ", its supposed to be " << price << endl;
            cout << "The eisle number of the item is " << i1.getEisleNum() << ", its supposed to be  " << eisle <<  endl;
            flag = true;
        }
        i1.~Item();
        
    }
    if (flag == false)
    {
        cout << "All test cases passed!" << endl;
    }
    return 0;
}
