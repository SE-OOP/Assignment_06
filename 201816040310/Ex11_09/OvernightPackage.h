#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"
class OvernightPackage: public Package
{
	public:
		//construct 
		OvernightPackage(string ="",string ="",string ="",string="",string ="",double=1,double=1,double=1);
		double calculateCost();
		void print();
	private:
		// extra cost per weight
		double extraCost;

};

#endif