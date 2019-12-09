//OvernightPackage.cpp

#include"OvernightPackage.h"

OvernightPackage::OvernightPackage(string senderNam,string addresseeNam,string address0,string city0,string state0,string postCod,double weigh,double unitPric,double extraCharg)
    :Package(senderNam,addresseeNam,address0,city0,state0,postCod,weigh,unitPric)
{
    setExtraCharge(extraCharg);
}

void OvernightPackage::setExtraCharge(double extraCharg)
{
    if(extraCharg>0)
    {
        extraCharge=extraCharg;
    }
    else
    {
        throw invalid_argument("extraCharge 's value is error");
    }
}

double OvernightPackage::getExtraCharge() const
{
    return extraCharge;
}

double OvernightPackage::calculateCost() //borrow base class's function calculate()
{
    setUnitPrice(getUnitPrice()+getExtraCharge());
    return Package::calculateCost();
}
