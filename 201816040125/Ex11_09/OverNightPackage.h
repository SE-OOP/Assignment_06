#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include<string>
#include"Package.h"
//using namespace std;

class OverNightPackage : public Package
{
public:
      OverNightPackage(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double=0.0,double=0.0,double=0.0);
      void setAdditionCost(double);
      double getAdditionCost();
      double calculateCost();
private:
    double Additioncost;//¶îÍâ·ÑÓÃ

};



#endif // PACKAGE_H

