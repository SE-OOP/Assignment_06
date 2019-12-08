#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include <string>
#include "Package.h"

class OvernightPackage : public Package
{
	public:
		OvernightPackage (const string&,const string&,const string&,const string&,const string&,const string&,double,double,double);
		void setExtraFee(double);
		double calculateCost();
		void print();
	private:
		double extraFee;
};

#endif
