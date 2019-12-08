#include <iostream>
#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(char name , char address , char city, char state , int zipcode , double heavy , double fee , double cost)
:Package(name , address , city , state , zipcode , heavy , fee)
{
    setCost(cost);
}

void TwoDayPackage::setCost(double cost)
{
    Cost = cost;
}

double TwoDayPackage::getCost()
{
    return Cost ;
}


double TwoDayPackage::CalculateCost()
{
    double costall;
    costall = Package::getHeavy() * Package::getFee() + Cost ;
    return costall ;
}
