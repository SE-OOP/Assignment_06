#include<string>
using namespace std;
#include"Package.h"
#include"TwoDayPackage.h"
TwoDayPackage::TwoDayPackage(double weigh, double pric,double pj)
	:Package(weigh, pric)
{
	pjfee = pj;
}
double TwoDayPackage::calculateCost()
{
	return getWeight() * getPrice() + pjfee;
}

