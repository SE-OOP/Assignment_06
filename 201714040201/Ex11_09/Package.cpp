//Package.cpp
//Member function definition for class Package
#include <iostream>
#include <string>
using namespace std;

#include "Package.h"//include definition of class Package

//Package constructor initializes data member balance
Package::Package(string SenderName,string ReceiverName,string SenderAddress,string ReceiverAddress,string PostalCode,double ParcelWeighs,double Univalence)
{
    senderName=SenderName;
    receiverName=ReceiverName;
    senderAddress=SenderAddress;
    receiverAddress=ReceiverAddress;
    postalCode=PostalCode;
    setUnivalence(Univalence);
    setParcelWeighs(ParcelWeighs);
}
//set the value of univalence
void Package::setUnivalence(double Univalence)
{
    if(Univalence>0)
        univalence=Univalence;
    else
        univalence=0;
}
//get the value of univalence
double Package::getUnivalence()const
{
    return univalence;
}
//set the value of parcelWeighs
void Package::setParcelWeighs(double ParcelWeighs)
{
    if(ParcelWeighs>0)
        parcelWeighs=ParcelWeighs;
    else
        parcelWeighs=0;
}
//get the value of parcelWeighs
double Package::getParcelWeighs()const
{
    return parcelWeighs;
}
//return senderName
string Package::getSenderName()const
{
    return senderName;
}
//return receiveName
string Package::getReceiverName()const
{
    return receiverName;
}
//return senderAddress
string Package::getSenderAddress()const
{
    return senderAddress;
}
//return receiverAddress
string Package::getReceiverAddress()const
{
    return receiverAddress;
}
//return the price of package
double Package::calculateCost()
{
    return parcelWeighs*univalence;
}
//print information of package
void Package::print()const
{
    cout<<"sender person's information:\n";
    cout<<getSenderName()<<"\n"<<getSenderAddress()<<"\n";
    cout<<"receiver person's information:\n";
    cout<<getReceiverName()<<"\n"<<getReceiverAddress()<<"\n";
}
