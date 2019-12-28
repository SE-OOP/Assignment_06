#include<iostream>
#include"OvernightPackage.h"
using namespace std;
OvernightPackage::OvernightPackage(string sendname,string receivename,string address,string city,string county,string postalcode,double weight,double fee,double overnightfee)
:Package( sendname, receivename, address, city, county, postalcode, weight, fee)
{
    if(overnightfee < 0)
        cout<<"overnightfee is invalid"<<endl;
    else
        OverNightFee = overnightfee;
}
double OvernightPackage::CalculateCost(double fee,double weight)
{
    return weight * fee + OverNightFee;
}
