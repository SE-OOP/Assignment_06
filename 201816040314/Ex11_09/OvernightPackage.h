//OvernightPackage.h
#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "Package.h"
class OvernightPackage:public Package
{
public:
    OvernightPackage(std::string ,std::string ,std::string ,std::string ,std::string ,double ,double,double);//constructor with eight parameter
    ~OvernightPackage();//destructor
    void setOvernightFee(double);
    double getOvernightFee()const;
    double calculateCost()const;

private:
    double overnightFee;//data number
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
