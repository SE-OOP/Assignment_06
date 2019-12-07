#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include <string>
#include "Package.h"
using namespace std;

class OvernightPackage:public Package 
{
public:
	OvernightPackage(const string &,const string &,const string &,const string &,
		const string &,double,double,double);
	void setPremium(double);
	double getPremium();
	double calculateCost();
private:
	double premium;	
};
#endif
