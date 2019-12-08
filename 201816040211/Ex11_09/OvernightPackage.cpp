#include <iostream>
using namespace std;

#include "OvernightPackage.h"

OvernightPackage::OvernightPackage( string Sender, string Receiver, string Place, string City,string State,string Bianma,
                             double Weight,double Fee,double Twofee)
       : package(Sender,Receiver,Place,City,State,Bianma,Weight,fee)
{
    settwofee( Twofee);
}

void settwofee(double Twofee)
{
    if(Twofee>0)
    {
        twofee=Twofee;
    }
    else
    {
        throw invalid_argument( "average must be greater than zero! ");
    }
}
double getfee()
{
    return twofee;
}

double calculateCost(double fee, double twofee, double weight )
{
    return (fee+twofee)*weight;
}
void print()
{
    Package::print();
    cout<<"twofee: "<<gettwofee()<<endl;
}
