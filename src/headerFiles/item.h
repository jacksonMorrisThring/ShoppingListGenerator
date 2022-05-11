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
    void setItemName(std::string newName);
    void setItemPrice(float newPrice);
    void setEisleNum(int newEisle);

    ~Item();
};
#endif