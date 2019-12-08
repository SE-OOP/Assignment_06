#include"TwoDayPackage.h"
#include <bits/stdc++.h>
#include "Package.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string &rName,const string &sName,const string &rAdress,const string &sAdress, const string &code,double f,double w,double e)
:Package(rName,sName,rAdress,sAdress,code,f,w)
{
    setExtraFee(e);
}

void TwoDayPackage::setExtraFee(double e)
{
    if(e > 0)
        extraFee = e;
}

double TwoDayPackage::getExtraFee()
{
    return extraFee;
}

double TwoDayPackage::calculateCost()
{

    return this->getWeight()*this->getFee()+this->getWeight()*extraFee;
}
