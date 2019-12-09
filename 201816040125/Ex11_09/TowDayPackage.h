#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include<string>
#include"Package.h"
using namespace std;

class TowDayPackage : public Package
{
public:
      TwoDayPackage(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double=0.0,double=0.0,double=0.0);
      void setFee(double);
      double getFee()const;
      double calculateCost()const;
private:
    double fee;//平寄费

};

#endif
