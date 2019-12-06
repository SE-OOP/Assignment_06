#include<iostream>
#include<iomanip>
#include<string>
#include"TowDayPackage.h"
using namespace std;

//constructor function
//call Package function to defaulted deliverer and receiver information
TowDayPackage::TowDayPackage(const string &den,const string &dea,const string &dec,const string &des,const string &deco,
            const string &ren,const string &rea,const string &rec,const string &res,const string &reco,
            const double &w,const double &p,const double &f)
            :Package(den,dea,dec,des,deco,ren,rea,rec,res,reco,w,p)
{
    setFee(f);
} //end function
//set function
void TowDayPackage::setFee(double a)
{
    if(a>0.0)
        Fee=a;
    else
        throw invalid_argument("Fee must be >0.0");
}//end set function

//return Fee
double TowDayPackage::getFee()
{
    return Fee;
}//end function
//
double TowDayPackage::calculateCost()
{
   return Package::calculateCost()+Fee;
}//end function

