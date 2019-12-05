// Exercise 11.9 Solution:Package.cpp
#include<stdexcept>
#include<iostream>
using namespace std;
#include"Package.h"
//constructor
Package::Package(const string &senderName,const string &sendAddress,const string &sendCity,const string &sendState,const string &sendPostalCode,const string &receiverName,const string &receiveAddress,const string &receiveCity,const string &receiveState,const string &receivePostalCode,double w,double f)
{
    setSender(senderName);
    setSenderAddress(sendAddress);
    setSenderCity(sendCity);
    setSenderState(sendState);
    setSenderPostalCode(sendPostalCode);
    setReceiver(receiverName);
    setReceiverAddress(receiveAddress);
    setReceiverCity(receiveCity);
    setReceiverState(receiveState);
    setReceiverPostalCode(receivePostalCode);
    setWeight(w);
    setFee(f);
}
//set sender
void Package::setSender(const string &senderName)
{
    sender=senderName;
}
//return sender
string Package::getSender() const
{
    return sender;
}
//set senderAddress
void Package::setSenderAddress(const string &sendAddress)
{
    senderAddress=sendAddress;
}
//return senderAddress
string Package::getSenderAddress() const
{
    return senderAddress;
}
//set senderCity
void Package::setSenderCity(const string &sendCity)
{
    senderCity=sendCity;
}
//return senderCity
string Package::getSenderCity() const
{
    return senderCity;
}
//set senderState
void Package::setSenderState(const string &sendState)
{
    senderState=sendState;
}
//return senderState
string Package::getSenderState() const
{
    return senderState;
}
//set senderPostalCode
void Package::setSenderPostalCode(const string &sendPostalCode)
{
    senderPostalCode=sendPostalCode;
}
//return senderPostalCode
string Package::getSenderPostalCode() const
{
    return senderPostalCode;
}
//set receiver
void Package::setReceiver(const string &receiveName)
{
    receiver=receiveName;
}
//return receiver
string Package::getReceiver() const
{
    return receiver;
}
// set receiverAddress
void Package::setReceiverAddress(const string &receiveAddress)
{
    receiverAddress=receiveAddress;
}
//return receiverAddress
string Package::getReceiverAddress() const
{
    return receiverAddress;
}
//set receiverCity
void Package::setReceiverCity(const string &receiveCity)
{
    receiverCity=receiveCity;
}
//return receiverCity
string Package::getReceiverCity() const
{
    return receiverCity;
}
//set receiverState
void Package::setReceiverState(const string &receiveState)
{
    receiverState=receiveState;
}
//return receiverState
string Package::getReceiverState() const
{
    return receiverState;
}
//set receiverPostalCode
void Package::setReceiverPostalCode(const string &receivePostalCode)
{
    receiverPostalCode=receivePostalCode;
}
//return receiverPostalCode
string Package::getReceiverPostalCode() const
{
    return receiverPostalCode;
}
//set weight
void Package::setWeight(double w)
{
    if(w>=0)
        weight=w;
    else
        throw invalid_argument("weight must be >= 0");
}
//return weight
double Package::getWeight() const
{
    return weight;
}
//set fee
void Package::setFee(double f)
{
    if(f>=0)
        fee=f;
    else
        throw invalid_argument("fee must be >= 0");
}
//return fee
double Package::getFee() const
{
    return fee;
}
//return calculateCost
double Package::calculateCost() const
{
    return weight*fee;
}
//print  Package object
void Package::print()const
{
    cout << "sender name: " << sender
      << "\nsenderAddress: " << senderAddress
      << "\nsenderCity: " << senderCity
      << "\nsenderState: " << senderState
      << "\nsenderPostalCode: " << senderPostalCode
      << "\nreceiver name" << receiver
      << "\nreceiverAddress: " << receiverAddress
      << "\nreceiverCity: " << receiverCity
      << "\nreceiverState: " << receiverState
      << "\nreceiverPostalCode: " << receiverPostalCode
      << "\nweight: " << weight
      << "\nfee: " << fee;
}
