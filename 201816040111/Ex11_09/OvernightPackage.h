#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "Package.h"

class OvernightPackage : public Package
{
public:
    OvernightPackage ( const std::string& , const std::string& , const std::string& , const std::string& , const std::string& ,
            const std::string& , const std::string& , const std::string& , const std::string& , const std::string& ,
            double , double , double );

    void setextraOuncesPerOunce( double );
    double calculateCost() ;
    void print();
private:
    double extraOuncesPerOunce ;
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
