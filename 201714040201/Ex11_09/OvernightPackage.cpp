// OvernightPackage.cpp
// Member-function definitions for class OvernightPackage.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Package.h"
#include "OvernightPackage.h" // OvernightPackage class definition

//OvernightPackage constructor initializes data member balance
OvernightPackage::OvernightPackage(string SenderName,string ReceiverName,string SenderAddress,string ReceiverAddress,string PostalCode,double ParcelWeighs,double Univalence,double NightFee)
    :Package(SenderName,ReceiverName,SenderAddress,ReceiverAddress,PostalCode,ParcelWeighs,Univalence)
{
    if(NightFee>0)
        nightFee=NightFee;
    else
        nightFee=0;
}
double OvernightPackage::calculateCost()
{
    Package::setUnivalence(nightFee+Package::getUnivalence());
    return Package::calculateCost();
}
