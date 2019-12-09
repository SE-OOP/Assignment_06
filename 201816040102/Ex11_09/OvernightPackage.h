#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <iostream>
#include <string>
#include "Package.h"

using namespace std;

class OvernightPackage:public Package
{
public:
	OvernightPackage (const string &,const string &,const string &,const string &,const string &,const string &,double,double,double);   //寄件人，收件人，地址，城市，所在州，邮政编码,重量，每盎司价格 ,额外费用 
	void setAdditionalCosts(double);//set 额外费用
	double getAdditionalCosts();
	double CalculateCost();
private:
	double additionalcosts;
};

#endif 
