

#include <iostream>
#include <string>
#include "OvernightPackage.h"
using namespace std;
OvernightPackage::OvernightPackage(const string &a,const string &b,const string &c,const string &d,const string &e,double f,double g,double h)
:Package(a,b,c,d,e,f,g)
{
 setAdditionalCosts(h);
}
void OvernightPackage::setAdditionalCosts(double h)
{
    if(h>0)
        additionalcosts=h;
    else
        additionalcosts=0;
}
double OvernightPackage::getAdditionalCosts()
{
    return additionalcosts;
}
double OvernightPackage::calculateCost()
{
    Package::setCost(Package::getCost()+this->getAdditionalCosts());
    return Package::calculateCost();
}
void OvernightPackage::display()
{
    Package::display();
    cout<<"付给隔夜快递服务的每盎司额外费用为："<<getAdditionalCosts()<<endl;
    cout<<"需要支付的费用为："<<Package::getCost()<<" * "<<Package::getWeight()<<" = "<<calculateCost()<<endl;
}

