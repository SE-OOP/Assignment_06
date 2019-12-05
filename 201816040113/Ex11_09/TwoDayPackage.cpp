//TwoDayPackage.cpp
#include <iostream>
#include <stdexcept>
#include "TwoDayPackage.h"
using namespace std;

// constructor
TwoDayPackage::TwoDayPackage(const string &sname,const string &saddress,const string &scity,const string &sstate,const string &spostcode,
                             const string &rname,const string &raddress,const string &rcity,const string &rstate,const string &rpostcode,
                             double weight,double priceForPerOunce,double Fee)
          :Package(sName,sAddress,sCity,sState,sPostcode,rName,rAddress,rCity,rState,rPostcode,Weight,PriceForPerOunce)
{
        setsName(sname);
        setsAddress(saddress);
        setsCity(scity);
        setsState(sstate);
        setsPostcode(spostcode);

        setrName(rname);
        setrAddress(raddress);
        setrCity(rcity);
        setrState(rstate);
        setrPostcode(rpostcode);

        setWeight(weight);
        setPriceForPerOunce(priceForPerOunce);
        flatCharge=Fee;//get flatCharge

}

//print function for class TwoDayPackage
void TwoDayPackage::print()
{
    Package::print();
    cout<<"The TotalCost is: $"<<TwoDayPackage::calculateCost()<<endl;
}

//calculateCost function for class TwoDayPackage
double TwoDayPackage::calculateCost()
{
    return flatCharge+Package::calculateCost();
}
