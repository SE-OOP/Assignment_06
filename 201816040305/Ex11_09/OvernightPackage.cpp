#include <iostream>
#include"OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(char name , char address , char city, char state , int zipcode , double heavy , double fee , double cost)
:Package(name , address , city , state , zipcode , heavy , fee)
{
    setCostOvernight(cost);
}
void OvernightPackage::setCostOvernight(double cost)
{
    cost1 = cost;
}

double OvernightPackage::getCostOvernight()
{
    return cost1 ;
}

double OvernightPackage::CalculateCost()
{
    double allcost ;
    allcost = (cost1+Package::getFee())*Package::getHeavy() ;
    return allcost ;
}
