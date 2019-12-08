//TwoDayPackage.cpp
#include "TwoDayPackage.h"
TwoDayPackage::TwoDayPackage(std::string sender02,std::string address02,std::string city02,std::string state02,std::string code02,double weight,double ounceFee,double twoDayAverageFee)
:Package(sender02, address02, city02, state02, code02, weight, ounceFee),twoDayFee(twoDayAverageFee)//to initialize the data number
{

}
TwoDayPackage::~TwoDayPackage()//destructor
{

}
void TwoDayPackage::setTwoDayFee(double twoDayFee)//to initialize the data number twoDayFee
{
    this->twoDayFee=twoDayFee;
}
double TwoDayPackage::getTwoDayFee()const//to return the data number twoDay Fee
{
    return this->twoDayFee;
}
double TwoDayPackage::calculateCost()const//to calculate the cost of the cost
{
    return Package::calculateCost()+getTwoDayFee();
}
