#include <string>
using namespace std;
#include "OvernightPackage.h"

OvernightPackage::OvernightPackage( const string &sendName,const string &sendD,const string &sendCity,const string &sendZ,const string &sendID,
                              const string &Name,const string &D,const string &City,const string &Z,const string &ID,
                              double Weight,double Fee,double Extrafee)
:Package(sendName,sendD,sendCity,sendZ,sendID,Name,D,City,Z,ID,Weight,Fee)
{
    setExtraFee(Extrafee);
}
void OvernightPackage::setExtraFee(double &Extrafee)
{
    extrafee=Extrafee;
}

double OvernightPackage::getExtraFee()
{
    return extrafee;
}

double OvernightPackage::caculateCost()
{
    return (getWeight()+getExtraFee())*getPrice();
}
