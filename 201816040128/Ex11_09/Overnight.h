#ifndef OVERNIGHT_H
#define  OVERNIGHT_H
#include<string>
using namespace std;
#include"Package.h"

class Overnight : public Package
{
public:
	Overnight(double, double, double);
	double calculateCost();
private:
	double perfee;
};
#endif 

