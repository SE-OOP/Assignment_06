#include <iostream>
#include "OvernightPackage.h"
#include "Package.h"
using namespace std;

OvernightPackage::OvernightPackage(const string &nam,const string &add,const string &cit,const string &sta,
		const string &pos,double wei,double fe,double pre)
	:Package(nam,add,cit,sta,pos,wei,fe)
{
	setPremium(pre);
}

void OvernightPackage::setPremium(double pre)
{
	premium = pre;
}

double OvernightPackage::getPremium()
{
	return premium;
}

double OvernightPackage::calculateCost()
{
	return getWeight()*(getFee() + getPremium());
}
