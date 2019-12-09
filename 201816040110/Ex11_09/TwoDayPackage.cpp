#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
#include "TwoDayPackage.h"
TwoDayPackage::TwoDayPackage(const string &se,const string &re,const string &add,const string &ci,const string &con,const string &post,double Weight,double Fee,double Fee1)
:Package(se,re,add,ci,con,post,Weight,Fee)
{
    setfee1(Fee1);
}

void TwoDayPackage::setfee1(double a)
{
    fee1=a;
}

double TwoDayPackage::CalculateCost()
{
    return calculateCost()+fee1;
}

