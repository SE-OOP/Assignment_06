#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const string &sendername,const string & senderaddress,const string & sendercity, const string & senderstate,const string & sendercode,const string & name, const string & address, const string & city, const string & state, const string & code, double weight, double price ,double fee)
: Package(sendername,senderaddress, sendercity,senderstate,sendercode,name,address,city,state,code,weight,price)
{
    if(fee>0)
        FlatMailFee=fee;
    else{
        FlatMailFee=0;
        cout<< "FlatMailFee is error"<<endl;
    }
}
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+FlatMailFee;
}
