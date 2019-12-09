#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
#include "Package.h"
Package::Package(const string &se,const string &re,const string &add,const string &ci,const string &con,const string &post,double Weight,double Fee)
{
    sename=se;
    rename=re;
    address=add;
    city=ci;
    continent=con;
    postalcode=post;
    setweight(Weight);
    setfee(Fee);
}

void Package::setsename(const string &a)
{
    sename=a;
}

void Package::setrename(const string &a)
{
    rename=a;
}

void Package::setaddress(const string &a)
{
    address=a;
}

void Package::setcity(const string &a)
{
    city=a;
}

void Package::setcontinent(const string &a)
{
    continent=a;
}

void Package::setpostalcode(const string &a)
{
    postalcode=a;
}

void Package::setweight(double a )
{
    if(a>=0.0)
    weight=a;
}

void Package::setfee(double a )
{
    if(a>=0.0)
    fee=a;
}

double Package::calculateCost()
{
    return weight*fee;
}

double Package::getfee()
{
    return fee;
}
