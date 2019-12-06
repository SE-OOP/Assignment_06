#include<iostream>
#include<string>

#include"Package.h"
using namespace std;

Package::Package(const string &ji,const string &shou,const string &add,const string &cit,const string &sta,const string &mi,double wei,double fe)
{
    jiname=ji;//invalue ji to jiname
    shouname=shou;//invalue shou to shouname
    address=add;//invalue add to address
    city=cit;//invalue cit to city
    state=sta;//invalue sta to state
    mima=mi;//invalue mi to mima
    if(wei>0&&fe>0)//if both of them more than 0
    {
        weight=wei;//invalue wei to weight
        fee=fe;//invalue fe to fee
    }
}

double Package::CalculateCost()
{
    return weight*fee;//return the data of weight mutiply fee
}
