#ifndef TWODAYPACKAGE_H
#define  TWODAYPACKAGE_H
#include<string>
using namespace std;
#include"Package.h"

class TwoDayPackage : public Package 
{
public:
	TwoDayPackage(double,double,double);
	double calculateCost();
private:
	double pjfee;
};
#endif 

