#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include "Package.h"

class TwoDayPackage : public Package
{
public:
    TwoDayPackage ( const std::string& , const std::string& , const std::string& , const std::string& , const std::string& ,
            const std::string& , const std::string& , const std::string& , const std::string& , const std::string& ,
            double , double , double );
    void setflatShippingFee( double );
    double calculateCost() ;
    void print();
private:
    double flatShippingFee;
};


#endif // TWODAYPACKAGE_H_INCLUDED
