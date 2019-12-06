#include<iostream>
#include<string>

#include"TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string &ji,const string &shou,const string &add,const string &cit,const string &sta,const string &mi,double wei,double fe,double twodayfe)
     :Package(ji,shou,add,cit,sta,mi,wei,fe)
{
    twodayfee=twodayfe;//invalue twodayfe to twidayfee
}

double TwoDayPackage::CalculateCost()
{
    return Package::CalculateCost()+twodayfee;//return the data of A plus B
}
