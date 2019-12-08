#include "OvernightPackage.h"
using namespace std;
OvernightPackage::OvernightPackage(const string &sendername,const string & senderaddress,const string & sendercity, const string & senderstate,const string & sendercode,const string & name, const string & address, const string & city, const string & state, const string & code, double weight, double price ,double fee)
: Package(sendername,senderaddress, sendercity,senderstate,sendercode,name,address,city,state,code,weight,price)
{
    if(fee>0)
        OverNightFee=fee;
    else{
        OverNightFee=0;
        cout<< "OverNightFee is error"<<endl;
    }
}
double OvernightPackage::calculateCost()
{
    return OverNightFee*Package::getweight()+Package::calculateCost();
}
