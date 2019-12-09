#include <iostream>
#include <string>
#include "TwoDayPackage.h"
using namespace std;
TwoDayPackage::TwoDayPackage(const string &a,const string  &b,const string &c,const string &d,const string &e,double f,double g,double h)
    :Package(a,b,c,d,e,f,g)
    {
        setFlatCharge(h);
    }
void TwoDayPackage::setFlatCharge(double h)
    {
        if(h>0)
            flatcharge=h;
        else
            flatcharge=0;
    }
double TwoDayPackage::getFlatCharge()
{
    return flatcharge;
}
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+getFlatCharge();
}
void TwoDayPackage::display()
{
    Package::display();
    cout<<"需要付给两日快递的平邮费为："<<getFlatCharge()<<endl;
    cout<<"需要支付的费用为："<<Package::calculateCost()<<" + "<<getFlatCharge()<<" = "<<calculateCost()<<endl;
}
