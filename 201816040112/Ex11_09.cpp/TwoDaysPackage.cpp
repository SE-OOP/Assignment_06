#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
using namespace std;
#include "Package.h"
class tdpack:public package
{
public:
    explicit tdpack(string,string,string,string,string,string,double,double,double);
    void setexprice(double);
    double getexprice();
    double cal();
private:
    double exprice;
};


#endif // TWODAYPACKAGE_H_INCLUDED
