#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
#include "OvernightPackage.h"
OvernightPackage::OvernightPackage(const string &se,const string &re,const string &add,const string &ci,const string &con,const string &post,double Weight,double Fee,double Fee1)
:Package(se,re,add,ci,con,post,Weight,Fee)
{
    fee1=Fee1;
}

double OvernightPackage::CalculateCost()
{
    fee=fee+fee1;
    return weight*fee;
}

void OvernightPackage::printf()
{
    cout<<"send name is "<<sename<<"\nrend name is "<<rename<<"\nthe address is "<<address<<"\nthe city is "<<city<<
    "\nthe continent is "<<continent<<"\nthe postalcode is "<<postalcode<<endl<<"\nthe wight is "<<weight<<"\nthe fee is "<<fee<<endl;
}
