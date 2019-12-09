//Ex11_09:OvernightPakage.h
#include <string>
#include "Package.h"
using namespace std;
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
class OvernightPackage : public Package
{
public:
	//constructor define
	OvernightPackage(const string&, const string&, const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);
	void setOvernightFee(double);//fuction to set overnight fee
	virtual double calculateCost();//fuction to retrieve overnight fee
private:
	double overnightFee;
};
#endif // !OVERNIGHTPACKAGE_H
