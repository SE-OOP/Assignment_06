//Ex11_09.cpp
#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
    Package objectA("Joe","addressA","CityA","stateA","525427",30,2);//create an object objectA
    TwoDayPackage objectB("Amy","addressB","CityB","stateB","462181",20,4,20);//create an object objectB
    OvernightPackage objectC("Tom","addressC","cityC","stateC","371520",60,0.5,10);//create an object objectC

    objectA.print();//call to the print function of the class Package by Package object
    cout<<"cost:"<<objectA.calculateCost()<<endl<<endl;

    objectB.print();//call to the print function of the class Package by TwoDayPackage object
    cout<<"cost:"<<objectB.calculateCost()<<endl<<endl;

    objectC.print();//call to the print function of the class Package by OvernightPackage object
    cout<<"cost:"<<objectC.calculateCost()<<endl<<endl;
}
