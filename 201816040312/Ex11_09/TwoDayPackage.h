#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include"Package.h"

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const string&,const string&,const string&,const string&,const string&,double,double,double);//TwoDayPackage类的构造函数
    double calculatecost();//覆盖calculate函数
    void setcharge(double);//平寄费的set和get函数
    double getcharge();
private:
    double charge;//平寄费
};
#endif // TWODAYPACKAGE_H
