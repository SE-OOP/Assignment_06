#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include"Package.h"

using namespace std;
class OvernightPackage:public Package
{
public:
    OvernightPackage(const string&,const string&,const string&,const string&,const string&,double,double,double);//OvernightPackage的构造函数
    double calculatecost();//覆盖calculate函数
    void setservice(double);//每单位质量的额外费用的set和get函数
    double getservice();
private:
    double service;//每单位质量的额外费用
};
#endif // OVERNIGHTPACKAGE_H
