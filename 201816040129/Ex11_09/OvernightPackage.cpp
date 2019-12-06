#include<iostream>
#include<string>

#include"OvernightPackage.h"

using namespace std;

OvernightPackage::OvernightPackage(const string &ji,const string &shou,const string &add,const string &cit,const string &sta,const string &mi,double wei,double fe,double overnightfe)
    :Package(ji,shou,add,cit,sta,mi,wei,fe)
{
    overnightfee=overnightfe;//invalue overnightfe to overnightfee
    weight1=wei;//invalue wei to weight
}

double OvernightPackage::CalculateCost()
{
    return weight1*overnightfee+Package::CalculateCost();//return weight1 mutiply overnightfee
}
