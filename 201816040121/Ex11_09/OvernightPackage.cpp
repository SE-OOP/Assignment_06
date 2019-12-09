//Ex11_09:OvernightPackage.cpp
#include <iostream>
#include "OvernightPackage.h"
using namespace std;

//construct eight messages
OvernightPackage::OvernightPackage(const string& n, const string& a, const string& c, const string& s, const string& pN,
	double w, double f, double onF)
	:Package(n, a, c, s, pN, w, f)
{
	setOvernightFee(onF);
}

//fuction to set overnight fee
void OvernightPackage::setOvernightFee(double onF)
{
	overnightFee = onF;
}

//fuction to retrieve overnight fee
double OvernightPackage::calculateCost()
{
	double sum = getFee();
	sum += overnightFee;
	return sum * getWeight();
}
