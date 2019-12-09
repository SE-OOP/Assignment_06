//OvernightPackage.h
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include"Package.h"

class OvernightPackage : public Package
{
public:
    //inherit constructor
    OvernightPackage(string senderNam,string addresseeNam,string address0,string city0,string state0,string postCod,double weigh,double unitPric,double extraCharg);
    void setExtraCharge(double extraCharg);
    double getExtraCharge() const;
    double calculateCost(); //reset calculate cost
private:
    double extraCharge;

};
#endif // OVERNIGHTPACKAGE_H


