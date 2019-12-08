#include "TwoDayPackage.h"
//#include "Package.h"

TwoDayPackage::TwoDayPackage(const string s,const string r,const string sa,const string ra,
                 const string sc,const string rc,const string ss,const string rs,
                 const string sp,const string rp,const double w,const double o,const double f)
:Package(s,r,sa,ra,sc,rc,ss,rs,sp,rp,w,o)//初始化基类的数据成员
{
     fee=f;//初始化平寄费
}

double TwoDayPackage::calculateCost()
{
    return weight*fee+Package::calculateCost();//计算总价钱
}
