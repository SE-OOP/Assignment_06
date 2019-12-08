#ifndef OVERNIGHTPackage_H
#define OVERNIGHTPackage_H
#include <string>
#include "Package.h"
using namespace std ;
class OvernightPackage :public Package
{
public:
    OvernightPackage (const string &, const string &,const string &, const string &, const string &,const string &,double=0.0 ,double=0.0,double =0.0 ) ;
    void setweightcost (double ) ;
    double calculate_Cost ()  ;//重定义计算函数
    void print () ;
private:
    double weightcost ;
};
#endif
