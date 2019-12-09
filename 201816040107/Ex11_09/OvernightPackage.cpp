#include <iostream>
#include <iomanip>
#include "OvernightPackage.h"

using namespace std;
OvernightPackage::OvernightPackage(string a,string b1,string b2,string b3,string b4,string b5,double w,double c,double p)
    :Package(a,b1,b2,b3,b4,b5,w,c)
{
    setpremium(p);
}
void OvernightPackage::setpremium(double p)
{
    premium=p;
}
double OvernightPackage::getpremium()
{
    return premium;
}
double OvernightPackage::calculateCost()
{
    return (premium+getcost())*getweight();
}
void OvernightPackage::print()
{
    cout<<"OvernightPackage :"<<endl;
    Package::print();
    cout<<"extra fee is:"<<setw(5)<<getpremium()<<endl;
    cout<<"all fee is:"<<calculateCost()<<endl;
}
