#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "Package.h"
class OvernightPackage:public Package
{
public:
    OvernightPackage(const string &, const string &, const string &, const string &,
             const string &, int=0, double=0, double=0,double=0 );
    void setExCost( double );
    double getExCost()const;
    double calculateCost()const;
    void display()const;
private:
    double exCost;//每盎司额外费用
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
