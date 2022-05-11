#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item{
    public: 

    //States
    float price;
    std::string name;
    int eisle;

    //Constructors: based on amoutn of user given data
    Item(std::string name, int eisle);
    Item(std::string name);
    Item(std::string name, float price, int eisle);

    //getters
    std::string getItemName();
    float getItemPrice();
    int getEisleNum();

    //setters
    setItemName(std::string newName);
    setItemPrice(float newPrice);
    setEisleNum(int newEisle);
};
#endif