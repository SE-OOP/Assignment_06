#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string&sender,const string&recipient,const string&add,const string&c,const string&s,const string&code,double w,double f,double fr)
:Package(sender,recipient,add,c,s,code,w,f)
{
	setFreight(fr);
}

void TwoDayPackage::setFreight(double fr)
{
	freight=fr;
}

double TwoDayPackage::calculateCost()
{
	return freight+(getWeight()*getFee());
}
void TwoDayPackage::print()
{
	cout<<"\nFreight:"<<freight
	    <<"\nCost:"<<calculateCost()<<"\n\n";
}
