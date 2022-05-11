#include <string>
#include "../headerFiles/item.h"
#include <iostream>
using namespace std;


Item::Item(string name, int eisle){
    this -> name = name;
    this -> eisle = eisle;
}
Item::Item(string name){
    this -> name = name;

}
Item::Item(string name, float price, int eisle){
    this -> name = name;
    this -> eisle = eisle;
    this -> price = price;
}

 //getters
string Item::getItemName(){
    return name;
}
float Item::getItemPrice(){
    return price;
}
int Item::getEisleNum(){
    return eisle;
}

    //setters
void Item::setItemName(string newName){
    name = newName;
}
void Item::setItemPrice(float newPrice){
 price = newPrice;
}
void Item::setEisleNum(int newEisle){
    eisle = newEisle;
}

Item::~Item(){
    cout << "Destroying item with name " << this -> getItemName() << endl;
}