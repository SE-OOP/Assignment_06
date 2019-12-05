//OvernightPackage.cpp
#include <iostream>
#include <stdexcept>
#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(const string &sname,const string &saddress,const string &scity,const string &sstate,const string &spostcode,
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
    extraFee=Fee;
}
void OvernightPackage::print()
{
    Package::print();
    cout<<"The TotalCost is: $"<<OvernightPackage::calculateCost()<<endl;
}

double OvernightPackage::calculateCost()
{
    return extraFee*Weight+Package::calculateCost();
}
