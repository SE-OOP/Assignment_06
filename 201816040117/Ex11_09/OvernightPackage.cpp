
#include<stdexcept>
#include"OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(string se,string re,string ad,string ci,string pr,string co,double ou,double cos,double ni)
:Package(se,re,ad,ci,pr,co,ou,cos)
{
    if(ni>0)
        nightcost=ni;
    else
        throw invalid_argument("over night cost must be greater than 0");
}//constructor
double OvernightPackage::calculateCost()
{
    return Package::calculateCost()+nightcost*getOunce();
}//total cost
