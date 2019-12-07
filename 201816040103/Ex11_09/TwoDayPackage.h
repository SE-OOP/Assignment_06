#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"
#include <string>
using namespace std;

class TwoDayPackage:public Package
{
public:
	TwoDayPackage(const string &,const string &,const string &,const string &,
		const string &,double,double,double);
	void setFlatcharge(double);
	double getFlatcharge();
	double calculateCost();
private:
	double flatcharge;	
};
#endif
