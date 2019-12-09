#ifndef TWODAY_H
#define TWODAY_H

#include <string>
#include "Package.h"

class TwoDayPackage : public Package
{
	public:
		TwoDayPackage (const string&,const string&,const string&,const string&,const string&,const string&,double,double,double); 
		void setFreight(double);
		double calculateCost();
		void print();
	private:
		double freight;
};

#endif
