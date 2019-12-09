#include <iostream>
using namespace std;

#include "Package.h"
#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const string &sender,const string &recipient,const string &Address,const string &City,const string &State,const string &Postalcode,double Weight,double Oneshot,double Increase)
        :Package(sender,recipient,Address,City,State,Postalcode,Weight,Oneshot),increase(Increase)
{
}
void OvernightPackage::setIncrease(double Increase)
{
    increase=Increase;
}
double OvernightPackage::getIncrease()
{
    return increase;
}
double OvernightPackage::calculateCost()
{
    double sum=getOneshot()+getIncrease();
    Package::setOneshot(sum);
    Package::getOneshot();
    return Package::calculateCost();
}
