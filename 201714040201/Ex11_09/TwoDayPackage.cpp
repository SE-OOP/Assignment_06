// TwoDayPackage.cpp
// Member-function definitions for class TwoDayPackage.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Package.h"
#include "TwoDayPackage.h" // TwoDayPackage class definition

//TwoDayPackage constructor initializes data member balance
TwoDayPackage::TwoDayPackage(string SenderName,string ReceiverName,string SenderAddress,string ReceiverAddress,string PostalCode,double ParcelWeighs,double Univalence,double Please)
    :Package(SenderName,ReceiverName,SenderAddress,ReceiverAddress,PostalCode,ParcelWeighs,Univalence)
{
    if(Please>0)
        please=Please;
    else
        please=0;
}
double TwoDayPackage::calculateCost()
{
    return please+Package::calculateCost();
}
