#include <iostream>
#include "Package.h"
#include <stdexcept>

using namespace std;

Package::Package(const string &sfirst,const string &slast,const string &afirst,const string &alast,const string &saddress,const string &aaddress,const string &scity,
            const string &acity,const string &sstate,const string &astate,const string &scode,const string &acode,double pweight,double pcost)
{
    senderFirstName=sfirst;
    senderLastName=slast;
    addresseeFirstName=afirst;
    addresseeLastName=alast;
    senderAddress=saddress;
    addresseeAddress=aaddress;
    senderCity=scity;
    addresseeCity=acity;
    senderState=sstate;
    addresseeState=astate;
    senderPostalCode=scode;
    addresseePostalCode=acode;
    setPackageWeight(pweight);
    setPerUnitCost(pcost);

}
void Package::setPackageWeight(double pw)
{
    if(pw>0)
    {
        packageWeight=pw;
    }
    else
    {
        throw invalid_argument("packageweight must be > 0");
    }
}
double Package::getPackageWeight()const
{
    return packageWeight;
}
void Package::setPerUnitCost(double puc)
{
    if(puc>0)
    {
        perUnitCost=puc;
    }
    else
    {
        throw invalid_argument("perUnitCost must be > 0");
    }
}
double Package::getPerUnitCost()const
{
    return perUnitCost;
}
void Package::setsenderFirstName(const string &s)
{
    senderFirstName=s;
}
string Package::getsenderFirstName()const
{
    return senderFirstName;
}
void Package::setaddresseeFirstName(const string &a)
{
    addresseeFirstName=a;
}
string Package::getaddresseeFirstName()const
{
    return addresseeFirstName;
}
void Package::setsenderLastName(const string &s)
{
    senderLastName=s;
}
string Package::getsenderLastName()const
{
    return senderLastName;
}
void Package::setaddresseeLastName(const string &a)
{
    addresseeLastName=a;
}
string Package::getaddresseeLastName()const
{
    return addresseeLastName;
}
void Package::setsenderAddress(const string &s)
{
    senderAddress=s;
}
string Package::getsenderAddress()const
{
    return senderAddress;
}
void Package::setaddresseeAddress(const string &a)
{
    addresseeAddress=a;
}
string Package::getaddresseeAddress()const
{
    return addresseeAddress;
}
void Package::setsenderCity(const string &s)
{
    senderCity=s;
}
string Package::getsenderCity()const
{
    return senderCity;
}
void Package::setaddresseeCity(const string &a)
{
    addresseeCity=a;
}
string Package::getaddresseeCity()const
{
    return addresseeCity;
}
void Package::setsenderState(const string &s)
{
    senderState=s;
}
string Package::getsenderState()const
{
    return senderState;
}
void Package::setaddresseeState(const string &a)
{
    addresseeState=a;
}
string Package::getaddresseeState()const
{
    return addresseeState;
}
void Package::setsenderPostalCode(const string &s)
{
    senderPostalCode=s;
}
string Package::getsenderPostalCode()const
{
    return senderPostalCode;
}
void Package::setaddresseePostalCode(const string &a)
{
    addresseePostalCode=a;
}
string Package::getaddresseePostalCode()const
{
    return addresseePostalCode;
}
double Package::calculateCost()
{
    return getPackageWeight()*getPerUnitCost();
}
void Package::printMessage()const
{
    cout<<"sender name: "<<getsenderFirstName()<<' '<<getsenderLastName()<<endl
        <<"address: "<<getsenderAddress()<<endl
        <<"city: "<<getsenderCity()<<endl
        <<"state: "<<getsenderState()<<endl
        <<"postal code: "<<getsenderPostalCode()<<endl
        <<"addressee name: "<<getaddresseeFirstName()<<' '<<getaddresseeLastName()<<endl
        <<"address: "<<getaddresseeAddress()<<endl
        <<"city: "<<getaddresseeCity()<<endl
        <<"state: "<<getaddresseeState()<<endl
        <<"postal code: "<<getaddresseePostalCode()<<endl
        <<"package weight: "<<getPackageWeight()<<endl
        <<"per unit cost: "<<getPerUnitCost()<<endl;
}
