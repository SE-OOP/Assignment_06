//Ex11_09:TwoDayPackage.cpp
#include <iostream>
#include "TwoDayPackage.h"
using namespace std;

//construct eight messages
TwoDayPackage::TwoDayPackage(const string& n, const string& a, const string& c, const string& s, const string& pN,
	double w, double f, double tDF)
	:Package(n, a, c, s, pN, w, f)
{
	setTwoDayFee(tDF);
}

//fuction to set two day fee
void TwoDayPackage::setTwoDayFee(double tDF)
{
	twoDayFee = tDF;
}

//fuction to retrieve two day fee
double TwoDayPackage::calculateCost()
{
	double sum = Package::calculateCost();
	sum += twoDayFee;
	return sum;
}
