//TwoDayPackage.cpp
//class TwoDayPackage member function definition
#include "TwoDayPackage.h"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

//constructor
TwoDayPackage::TwoDayPackage(const string &sender,const string &receiver,const string &addr,const string &cit,
                 const string &stat,const string &post,double weigh,double pricee,double twoDayfees)
                 :Package(sender,receiver,addr,cit,stat,post,weigh,pricee)
{
    if(twoDayfees>0)
        twoDayfee=twoDayfees;
    else
        throw invalid_argument("twoDay fee must be >0");
}//end constructor

//calculate cost
double TwoDayPackage::calculateCost()const
{
    return getWeight()*getPrice()+twoDayfee;
}//end calculates
