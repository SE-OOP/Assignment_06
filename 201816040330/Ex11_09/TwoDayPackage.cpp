#include "TwoDayPackage.h"
#include <iostream>
#include <string>//C++ standard string class

using namespace std;

TwoDayPackage::TwoDayPackage(const string &sender,const string &addressee,const string &addr,const string &ci,const string &state,const string &postal,double charg)
   :Package(sender,addressee,addr,ci,state,postal)
{
    setCharge(charg);

}//end TwoDayPackage constructor

void TwoDayPackage::setCharge(double charg)
{
    if(charg>0)
        charge=charg;
}//end function setCharge

double TwoDayPackage::getCharge()
{
    return charge;
}//end function getCharge

double TwoDayPackage::calculateCost(double charg)
{
    double weight,fee;
    return Package::calculateCost(weight,fee)+charg;
}//end function calculateCost


