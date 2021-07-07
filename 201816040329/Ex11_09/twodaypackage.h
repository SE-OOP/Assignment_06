#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include"package.h"
class twodaypackage:public package
{
public:
    twodaypackage(string &, string &, string &, string &,string &, string &,int, double = 0.0, double = 0.0,double=0.0);

    void settwotip(double);
     double gettwotip();

     double calculatecost();
private:
   double twotip;
};

#endif // TWODAYPACKAGE_H_INCLUDED
