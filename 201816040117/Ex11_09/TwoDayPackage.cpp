
#include<stdexcept>
#include"TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(string se,string re,string ad,string ci,string pr,string co,double ou,double cos,double po)
:Package(se,re,ad,ci,pr,co,ou,cos)
{
    if(po>0)
        postage=po;
    else
        throw invalid_argument("postage must be greater than 0");
}//constructor
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+postage;
}//total cost
