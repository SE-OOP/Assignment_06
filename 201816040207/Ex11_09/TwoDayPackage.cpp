#include"TwoDayPackage.h"
#include<iostream>

using namespace std;


TwoDayPackage::TwoDayPackage(string na,string add,string c,int po,double p,double w,double f)
:Package( na, add,c,po,p,w)
{
    setfee();
}

void TwoDayPackage::setfee()
{
    double charge =  Package::calculateCost();
    fee = charge*2;
}




