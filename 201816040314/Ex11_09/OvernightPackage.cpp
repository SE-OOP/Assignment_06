//OvernightPackage.cpp
#include "OvernightPackage.h"
OvernightPackage::OvernightPackage(std::string sender02,std::string address02,std::string city02,std::string state02,std::string code02,double weight,double ounceFee,double overnightFee)
:Package(sender02, address02, city02, state02, code02, weight, ounceFee)//to initialize the data number
{
    setOvernightFee(overnightFee);
}
OvernightPackage::~OvernightPackage()
{

}
void OvernightPackage::setOvernightFee(double overnightFee)//to initialize the overnightFee
{
    this->overnightFee=overnightFee;
}
double OvernightPackage::getOvernightFee()const//to return the data number overnightFee
{
    return this->overnightFee;
}
double OvernightPackage::calculateCost()const//to calculate the cost of mail
{
    return Package::getWeight()*(getOvernightFee()+Package::getOunceFee());
}

