#include <iostream>
#include <string>
#include "Package.h"
#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(const string&sender,const string&recipient,const string&add,const string&c,const string&s,const string&code,double w,double f,double extra)
:Package(sender,recipient,add,c,s,code,w,f)
{
	setExtraFee(extra);
}

void OvernightPackage::setExtraFee(double extra)
{
	extraFee=extra;
}

double OvernightPackage::calculateCost()
{
	return getWeight()*(getFee()+extraFee);
}

void OvernightPackage::print()
{
	cout<<"\nExtraFee:"<<extraFee
	    <<"\nCost:"<<calculateCost()<<"\n\n";
}
