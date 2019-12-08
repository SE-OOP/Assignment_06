#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include <string>
#include "Package.h"

class OvernightPackage:public Package
{
public:
    OvernightPackage(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,
            const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double,double,double);
    void setExtraCost(double);//设置额外费用
    double getExtraCost()const;//获取额外费用
    double calculateCost();//计算运输费用
    void printMessage()const;//打印信息
private:
    double extraCost;//额外费用
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
