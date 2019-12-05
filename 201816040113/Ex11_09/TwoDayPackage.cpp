//TwoDayPackage.cpp
#include <iostream>
#include <stdexcept>
#include "TwoDayPackage.h"
using namespace std;

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
        flatCharge=Fee;

}

void TwoDayPackage::setflatCharge(double Fee)
{
   flatCharge=Fee;
} // end function setflatCharge

double TwoDayPackage::getflatCharge()
{
   return flatCharge;
} // end function getflatCharge

void TwoDayPackage::print()
{
    Package::print();
    cout<<"The TotalCost is: $"<<TwoDayPackage::calculateCost()<<endl;
}

double TwoDayPackage::calculateCost()
{
    return flatCharge+Package::calculateCost();
}
