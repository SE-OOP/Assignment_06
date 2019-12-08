//Assignment_11-09
//Overnight.cpp

#include <iostream>
#include <stdexcept>
#include <string>

#include "OvernightPackage.h"
#include "Package.h"

using namespace std;

OvernightPackage::OvernightPackage( string Onebody,string Twobody,string Address,string City, string Zhou, string Number ,double Price,double Weight,double Overprice )
                                  :Package(Onebody, Twobody,Address, City,  Zhou,  Number ,Price,Weight)
                {
                    setOverprice( Overprice);
                }

void OvernightPackage::setOverprice(double Overprice)
{
    overprice=Overprice;
}

double OvernightPackage::getOverprice()
{
    return overprice;
}

 double OvernightPackage::calculateCost()
 {
     return Package::calculateCost()+getOverprice();
 }
void OvernightPackage::print()
{
    cout<<"OvernightPackage"<<endl;
    Package::print();

    cout <<"feiyong:"<<getOverprice();
    cout<<"\n xuyao:"<<calculateCost();
    cout<<endl;
}
