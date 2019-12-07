#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string &nam,const string &add,const string &cit,const string &sta,
		const string& pos,double wei,double fe,double fla)
		:Package(nam,add,cit,sta,pos,wei,fe)
{
	setFlatcharge(fla);
}

void TwoDayPackage::setFlatcharge(double fla)
{
	flatcharge = fla;
}

double TwoDayPackage::getFlatcharge()
{
	return flatcharge;
}

double TwoDayPackage::calculateCost()
{
	return getWeight()*getFee()+getFlatcharge();
}


