#ifndef EISLE_H
#define EISLE_H

#include <string>

class Eisle{
    public: 

    //States
    std::string* knownItems;
    int eisleNum;

    //Constructors: based on amoutn of user given data
    Eisle(int eisleNum, std::string* items);
    Eisle(int eisleNum);

    //getters
    int getEisleNum();
    std::string* getEisleItems();

    //setters
    // void setEisleItem(std::string* newItem);
    void setEisleNum(int newEisle);

    ~Eisle();
};
#endif