//Ex11_09:TwoDayPackage.h
#include <string>
#include "Package.h"
using namespace std;
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
class TwoDayPackage : public Package
{
public:
	//constructor define
	TwoDayPackage(const string&, const string&, const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);
	void setTwoDayFee(double);//fuction to set two day fee
	virtual double calculateCost();//fuction to retrieve two day fee
private:
	double twoDayFee;
}; 
#endif // !TWODAYPACKAGE_H
