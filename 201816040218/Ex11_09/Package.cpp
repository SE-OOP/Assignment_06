#include "Package.h"

using namespace std;

Package::Package(const string &sendername,const string & senderaddress,const string & sendercity, const string & senderstate,const string & sendercode,const string & name, const string & address, const string & city, const string & state, const string & code, double weight, double price )
:SenderName(sendername),SenderAddress(senderaddress),SenderCity(sendercity),SenderState(senderstate),SenderCode(sendercode), RecipientName(name),RecipientAddress(address),RecipientCity(city),RecipientState(state),RecipientCode(code)
{
    if(weight>0)
        Weight=weight;
    else{
        Weight=0;
        cout<< "Weight is error"<<endl;
    }
    if(price>0)
        Price=price;
    else{
        Price=0;
        cout << "Price is error"<<endl;
    }
}

double Package::calculateCost()
{
    return Weight*Price;
}
double Package::getweight()
{
    return Weight;
}
