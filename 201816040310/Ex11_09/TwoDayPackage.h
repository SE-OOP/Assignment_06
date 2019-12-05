#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"
class TwoDayPackage: public Package
{
	public:
		//construct
		TwoDayPackage(string ="",string ="",string ="",string="",string ="",double=1,double=1,double=1);
		//calculateCost
		double calculateCost();
		//print
		void print();
		
	private:
		// extra cost per order
		double ordinaryCost;

};

#endif