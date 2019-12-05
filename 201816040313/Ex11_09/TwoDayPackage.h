#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include <string>
#include "Package.h"


class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,
            const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double,double,double);
    double calculateCost();//计算运输费用
    void setTwoDayCost(double);//设置两日费用
    double getTwoDayCost()const;//获取两日费用
    void printMessage()const;//打印信息
private:
    double twoDayCost;//两日费用
};

#endif // TWODAYPACKAGE_H_INCLUDED
