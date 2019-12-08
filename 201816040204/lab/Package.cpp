#include <iostream>
#include "Package.h"
using namespace std;

Package :: Package(
                   const string &sn,const string &rn, const string &ra, const string &rp, const string &rc, const string &rz,
                   double weight, double fe)
                   {
                       senderName = sn;

                       recipientName = rn;
                       recipientAddress = ra;
                       recipientProvince = rp;
                       recipientCity = rc;
                       recipientZip = rz;
                       setPackageweight(weight);
                       setFee(fe);
                   }
void Package :: setSenderName(const string &sn)
{
    senderName = sn;
}
string Package ::getSenderName()const
{
    return senderName;
}

void Package :: setRecipientName(const string &rn)
{
    recipientName = rn;
}
string Package ::getRecipientName()const
{
    return recipientName;
}
void Package :: setRecipientAddress(const string &ra)
{
    recipientAddress = ra;
}
string Package :: getRecipientAddress()const
{
    return recipientAddress;
}
void Package :: setRecipientProvince(const string &rp)
{
    recipientProvince = rp;
}
string Package :: getRecipientProvince()const
{
    return recipientProvince;
}
void Package :: setRecipientCity (const string &rc)
{
    recipientCity = rc;
}
string Package :: getRecipientCity()const
{
    return recipientCity;
}
void Package :: setRecipientZip(const string &rz)
{
   recipientZip = rz;
}
string Package :: getRecipientZip()const
{
    return recipientZip;
}
void Package :: setPackageWeight(double weight)
{
    if(weight > 0.0)
        packageWeight = weight;
    else
        throw invalid_argument("Package weight must be >0.0");
}
double Package ::getPackageweight()const
{
    return packageWeight;
}
void Package :: setFee(double fe)
{
    if (fe > 0.0)
        fee = fe;
    else
        throw invalid_argument("Fee must be >0.0");
}
double Package :: getFee()const
{
    return fee;
}
double Package :: calculateConst()const
{
    return packageWeight * fee;
}


