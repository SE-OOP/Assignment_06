#include <iostream>
#include "Package.h"
using namespace std;

Package::Package(const string&sender,const string&recipient,const string&add,const string&c,const string&s,const string&code,double w,double f)
{
	senderName=sender;
	recipientName=recipient;
	address=add;
	city=c;
	state=s;
	postCode=code;
	setWeight(w);
	setFee(f);
}

double Package::calculateCost()
{
	return weight*fee;
}

void Package::setSenderName(const string&sender)
{
	senderName=sender;
}

string Package::getSenderName()
{
	return senderName;
}

void Package::setRecipientName(const string&recipient)
{
	recipientName=recipient;
}

string Package::getRecipientName()
{
	return recipientName;
}

void Package::setAddress(const string&add)
{
	address=add;
}

string Package::getAddress()
{
	return address;
}

void Package::setCity(const string&c)
{
	city=c;
}

string Package::getCity()
{
	return city;
}

void Package::setState(const string&s)
{
	state=s;
}

string Package::getState()
{
	return state;
}

void Package::setPostCode(const string&code)
{
	postCode=code;
}

string Package::getPostCode()
{
	return postCode;
}

void Package::setWeight(double w)
{
	weight=w;
}

double Package::getWeight()
{
	return weight;
}

void Package::setFee(double f)
{
	fee=f;
}

double Package::getFee()
{
	return fee;
}

void Package::print()
{
	cout<<"Sender Name:"<<senderName
	    <<"\nRecipient Name:"<<recipientName
	    <<"\nCity:"<<city
	    <<"\nState:"<<state
	    <<"\nPost Code:"<<postCode
	    <<"\nWeight:"<<weight
	    <<"\nFee:"<<fee
	    <<"\nCost:"<<calculateCost()<<"\n\n";
}
