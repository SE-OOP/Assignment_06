#include <iostream>
#include <string>

#include "TwoDayPackage.h"
#include "Package.h"

TwoDayPackage::TwoDayPackage(string Onebody,string Twobody,string Address,string City,string Number,string Zhou,double Price,double Weight,double Pingprice)
                            :Package(Onebody,Twobody,Address,City,Number,Zhou,Price,Weight)
                            {
                                setPingPrice(Pingprice);
                            }

void TwoDayPackage::setPingPrice(double Pingprice)
{
    pingprice=Pingprice;
}
double TwoDayPackage::getPingPrice()
{
    return pingprice;
}
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+TwoDayPackage::getPingPrice();
}
void TwoDayPackage::print()
{
    cout<<"TwoDayPackage"<<endl;
    Package::print();
    cout <<"平寄费："<<getPingPrice();
    cout<<"\n需要钱："<<calculateCost();
    cout<<endl;
}

