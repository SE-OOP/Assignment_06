// Exercise 11.9 Solution:Package.h
#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using namespace std;
class Package
{
public:
    Package(const string &, const string &, const string &,const string &, const string &, const string &,const string &, const string &, const string &,const string &,
      double = 0.0, double = 0.0 );
    void setSender(const string &);//set sender
    string getSender()const;//return  sender

    void setSenderAddress(const string &);//set senderAddress
    string getSenderAddress()const;// return  senderAddress

    void setSenderCity(const string &);//set senderCity
    string getSenderCity()const;//return  senderCity

    void setSenderState(const string &);//set senderState
    string getSenderState()const;//return  senderState

    void setSenderPostalCode(const string &);//set senderPostalCode
    string getSenderPostalCode()const;//return  senderPostalCode

    void setReceiver(const string &);//set receiver
    string getReceiver()const;//return  receiver

    void setReceiverAddress(const string &);//set receiverAddress
    string getReceiverAddress()const;// return  receiverAddress

    void setReceiverCity(const string &);//set receiverCity
    string getReceiverCity()const;// return  receiverCity

    void setReceiverState(const string &);//set receiverState
    string getReceiverState()const;//return  receiverState

    void setReceiverPostalCode(const string &);//set receiverPostalCode
    string getReceiverPostalCode()const;//return  receiverPostalCode

    void setWeight( double);//set weight
    double getWeight()const;//return weight

    void setFee(double);//set charge
    double getFee()const;//return  charge

    double calculateCost()const;//return calculateCost
    void print()const;//print Package object
private:
    string sender;
    string senderAddress;
    string senderCity;
    string senderState;
    string senderPostalCode;
    string receiver;
    string receiverAddress;
    string receiverCity;
    string receiverState;
    string receiverPostalCode;
    double weight;
    double fee;
};//end class Package

#endif // PACKAGE_H
