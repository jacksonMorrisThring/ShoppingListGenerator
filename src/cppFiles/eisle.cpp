#include <string>
#include "../headerFiles/eisle.h"
#include <iostream>
using namespace std;


Eisle::Eisle(int eisleNum, string* knownItems){
    this -> eisleNum = eisleNum;
    this -> knownItems = knownItems;
}
Eisle::Eisle(int eisleNum){
    this -> eisleNum = eisleNum;


}
//getters
int Eisle::getEisleNum(){
    return eisleNum;
}

string* Eisle::getEisleItems(){
    return knownItems;
}

    //setters
// void Eisle::setEisleItem(string* newItems){
//     eisle = newEisle;
// }
void Eisle::setEisleNum(int newEisle){
    eisleNum = newEisle;
}

Eisle::~Eisle(){
    cout << "Destroying Eisle" << endl;
}