//OvernightPackage.cpp
#include"OvernightPackage.h"

OvernightPackage::OvernightPackage(string senderNam,string addresseeNam,string address0,string city0,string state0,string postCod,double weigh,double unitPric,double extraCharg)
    :Package(senderNam,addresseeNam,address0,city0,state0,postCod,weigh,unitPric)
{
    setExtraCharge(extraCharg);
}
void OvernightPackage::setextraOuncesPerOunce( double mm )
{
    extraOuncesPerOunce = mm ;
}

double OvernightPackage::calculateCost()
{
    return  ( getcostPerOunce() + extraOuncesPerOunce ) * getpackageWeight() ;
}
void OvernightPackage::print()
{
    Package::print();
    cout << "Postage is : " << calculateCost() << endl;
}
