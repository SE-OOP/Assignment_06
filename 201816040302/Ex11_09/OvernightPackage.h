#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include"Package.h"

class OvernightPackage : public Package
{
public:
    OvernightPackage(string senderNam,string addresseeNam,string address,string city,string state,string postCod,double weigh,double unitPric,double extraCharg);
    void setExtraCharge(double extraCharg);
    double getExtraCharge() const;
    double calculateCost();
private:
    double extraCharge;

};
