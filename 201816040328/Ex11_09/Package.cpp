#include<iostream>
#include<iomanip>
#include<string>
#include"Package.h"
using namespace std;

//constructor function
//using inalitialize member lists
Package::Package(const string &den,const string &dea,const string &dec,const string &des,const string &deco,
            const string &ren,const string &rea,const string &rec,const string &res,const string &reco,
            const double &w,const double &p )
         :DeName(den),
          DeAddress(dea),
          DeCity(dec),
          DeState(des),
          DeCode(deco),
          ReName(ren),
          ReAddress(rea),
          ReCity(rec),
          ReState(res),
          ReCode(reco)

{
    setWeight(w);
    setPricePerWeight(p);//call set function to inalitialize Price PEer
}
//set weight
void Package::setWeight(double a)
{
    if(a>0.0)
        Weight=a;
    else
        throw invalid_argument("Weight must be >0.0");
}//end function
//set price per weight
void Package::setPricePerWeight(double a)
{
   if(a>0.0)
        PricePerWeight=a;
    else
        throw invalid_argument("Price Per Weight must be >0.0");
}//end set function
//return per price of weight
double Package::getPricePerWeight()
{
    return PricePerWeight;
}//end get class
//return weight multiply price per weight
double Package::calculateCost()
{
    return Weight*PricePerWeight;
}//end calculate function
