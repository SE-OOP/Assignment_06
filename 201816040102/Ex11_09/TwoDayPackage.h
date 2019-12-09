#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H


#include <string>
#include "Package.h"

using namespace std;

class TwoDayPackage:public Package
{
public:
	TwoDayPackage (const string &,const string &,const string &,const string &,const string &,const string &,double,double,double);    //寄件人，收件人，地址，城市，所在州，邮政编码,重量，每盎司价格 ,平寄费 
    void setFlatcharge(double);
	double getFlatcharge(); 
	double CalculateCost();
private:
	double flatcharge ;//平寄费 
};

#endif 
