#include<stdexcept>
#include"Package.h"
using namespace std;

Package::Package(string se,string re,string ad,string ci,string pr,string co,double ou,double cos)
:sender(se),recipient(re),address(ad),city(ci),province(pr),code(co)
{
    if(ou>0)
        ounce=ou;
    else
        throw invalid_argument("ounce must be greater than 0");
    if(cos>0)
        cost=cos;
    else
        throw invalid_argument("cost per ounce be must greater than 0");
}//constructor
double Package::calculateCost()
{
    return ounce*cost;
}//calculate cost per ounce
string Package::getSender()
{
    return sender;
}
string Package::getRecipient()
{
    return recipient;
}
string Package::getAddress()
{
    return address;
}
string Package::getCity()
{
    return city;
}
string Package::getProvince()
{
    return province;
}
string Package::getCode()
{
    return code;
}
double Package::getOunce()
{
    return ounce;
}
double Package::getCost()
{
    return cost;
}
