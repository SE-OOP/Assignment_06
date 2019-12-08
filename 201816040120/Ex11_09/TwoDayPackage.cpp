#include <iostream>
#include <string>
#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string &sN,const string &sA,const string &sC,const string &sS,
                 const string &sZC,const string &rN,const string &rA,const string &rC,
                 const string &rS,const string &rZC,double weight,double price,double Fee)
        :Package(sN,sA,sC,sS,sZC,rN,rA,rC,rS,rZC,weight,price)
        {
            setFee(Fee);
        }
void TwoDayPackage::setFee(Fee)
{
    fee = Fee;
}
double TwoDayPackage::getFee()
{
    return fee;
}
double TwoDayPackage::calculateCost(double weight,double price)
{
    return Package::getWeight() * Package::getPrice() + fee;
}
