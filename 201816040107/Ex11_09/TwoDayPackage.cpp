#include <iostream>
#include <iomanip>
#include "TwoDayPackage.h"
using namespace std;
TwoDayPackage::TwoDayPackage(string a,string b1,string b2,string b3,string b4,string b5,double w,double c,double f)
    :Package(a,b1,b2,b3,b4,b5,w,c)
{
    setflatcharge(f);
}
void TwoDayPackage::calculateCost()
{
    return flatcharge+Package::calculateCost();
}
void TwoDayPackage::setflatcharge(double f)
{
    flatcharge=f;
}
double TwoDayPackage::getflatcharge()
{
    return flatcharge;
}
void TwoDayPackage::print()
{
    cout<<"TwoDayPackage :"<<endl;
    Package::print();
    cout<<"flat charge is:"<<setw(5)<<getflatcharge()<<endl;
    cout<<"all fee is:"<<calculateCost()<<endl;

}
