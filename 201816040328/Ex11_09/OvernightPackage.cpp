#include<iostream>
#include<iomanip>
#include<string>
#include"OvernightPackage.h"
#include"Package.h"
using namespace std;

//constructor function
//call Package function to defaulted deliverer and receiver information
OvernightPackage::OvernightPackage(const string &den,const string &dea,const string &dec,const string &des,const string &deco,
            const string &ren,const string &rea,const string &rec,const string &res,const string &reco,
            const double &w,const double &p,const double &e)
            :Package(den,dea,dec,des,deco,ren,rea,rec,res,reco,w,p)
{
    if(e>0.0)
        extraFee=e;
    else
        throw invalid_argument("extraFee must be > 0.0");
} //end function
 double OvernightPackage::calculateCost()
 {
     setPricePerWeight(getPricePerWeight()+extraFee);
     return Package::calculateCost();
 }
