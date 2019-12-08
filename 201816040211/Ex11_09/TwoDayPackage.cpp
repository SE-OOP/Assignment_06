#include <iostream>
using namespace std;

#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage( string Sender, string Receiver, string Place, string City,string State,string Bianma,
                             double Weight,double Fee,double Average)
       : package(Sender,Receiver,Place,City,State,Bianma,Weight,Fee)
{
    setaverage( Average);
}

void TwoDayPackage::setaverage(double Average)
{
    if(Average>0)
    {
        average=Average;
    }
    else
    {
        throw invalid_argument( "average must be greater than zero! ");
    }
}
double TwoDayPackage::getaverage()
{
    return average;
}

double calculateCost(  )
{
    return getaverage() + Package::calculateCost();
}

void print()
{
    Package::print();
    cout<<"average: "<<getaverage()<<endl;
}
