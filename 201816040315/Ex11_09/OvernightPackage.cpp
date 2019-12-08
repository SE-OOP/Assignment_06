//OverNightPackage,cpp
//class overnight package member function definition
#include "OvernightPackage.h"
#include <iostream>
#include <stdexcept>
using namespace std;

//constructor
OverNightPackage::OverNightPackage(const string &sender,const string &receiver,const string &addr,const string &cit,
                 const string &stat,const string &post,double weigh,double pricee,double nightfees)
                 :Package(sender,receiver,addr,cit,stat,post,weigh,pricee)
{
   if(nightfees>0)
      nightfee = nightfees;
    else
        throw invalid_argument("night fee must be >0");
}//end constructor

//calculate cost
double OverNightPackage::calculateCost()const
{
    return getWeight()*(getPrice()+nightfee);
}//end function calculate cost
