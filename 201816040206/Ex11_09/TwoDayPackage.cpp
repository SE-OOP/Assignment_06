#include <string>
using namespace std;
#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage( const string &sendName,const string &sendD,const string &sendCity,const string &sendZ,const string &sendID,
                              const string &Name,const string &D,const string &City,const string &Z,const string &ID,
                              double Weight,double Fee,double twodaysFee)
    :Package( sendName,sendD,sendCity,sendZ,sendID,Name,D,City,Z,ID,Weight,Fee)
    {
        setTwoDaysFee(twodaysFee);
    }

void TwoDayPackage::setTwoDaysFee(double &twodaysFee)
{
    TwoDayfee=twodaysFee;
}

double TwoDayPackage::getTwoDaysFee()
{
    return TwoDayfee;
}

double TwoDayPackage::caculateCost()
 {
     return Package::caculateCost()+getTwoDaysFee();
 }
