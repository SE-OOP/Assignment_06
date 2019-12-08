#include <iostream>
#include <stdexcept>
#include "Package.h"
using namespace std;

Package::Package( string &, string &,string &,string &,string &,
             double = 0.0 , double = 0.0 )
void setPackageSender( string packagesender )
{
    packageSender = packagesender;
}
void getPackageSender()
{
    return PackageSender;
}
void setPackageRecipients( string packagerecipients )
{
    packageRecipients = packagerecipents;
}
void getPackageRecipients()
{
    return PackageRecipients;
}
void setPackageRecipientsAddress( string packageRecipientsaddress)
{
    packageRecipientsAddress = packageRecipientsaddress;
}
void getPackageRecipientsAddress()
{
    return packageRecipientsAddress;
}
void setPackageRecipientsCity( string packageRecipientscity )
{
    packageRecipientsCity = packageRecipientscity;
}
void getPackageRecipientsCity()
{
    return packageRecipientsCity;
}
void setPackageRecipientsState( string packageRecipientsstate )
{
    packageRecipientsState = packageRecipientsstate;
}
void getPackageRecipientsState()
{
    return packageRecipientsState;
}
void setPackageRecipientsCode( string packageRecipientscode )
{
    packageRecipientsCode = packageRecipientscode;
}
void getetPackageRecipientsCode()
{
    return packageRecipientsCode;
}
void setPackageWeight( double packageweight )
{
    if( packageweight > 0.0 )
        packageWeight = packageweight;
    else
        throw invalid_argument( "The packageweight must be >0.0" )
}
double getPackageWeight()
{
    return packageWeight;
}
void setPackageFee( double packagefee )
{
    if( packagefee > 0.0 )
        packageFee = packagefee;
     else
        throw invalid_argument( "The packagefee must be >0.0" )
}
double getPackageFee()
{
    return packageFee;
}
double calculateCost()
{
    return packageWeight * packageFee;
}
