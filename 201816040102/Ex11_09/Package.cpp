#include <iostream>
#include <string>
#include "Package.h"
#include <stdexcept>

using namespace std;

Package::Package (const string &send, const string &receipt, const string &add, const string &cit, const string &sta, const string &code, double we,double fe)     //寄件人，收件人，地址，城市，所在州，邮政编码,重量，每盎司价格 
{
	setSenderName(send);
	setAddresseeName(receipt);
	setAddress(add);
	setCity(cit);
	setState(sta);
	setPostalCode(code);
	setWeight(we);
	setFee(fe);
		
}
void Package::setSenderName(string send)	//set 寄件人姓名
{
	sender = send;
}
string Package::getSenderName()
{
	return sender;
}
void Package::setAddresseeName(string receipt)	//set 收件人姓名
{
	addressee=receipt;	
} 
string Package::getAddresseeName()
{
	return addressee;
}
void Package::setAddress(string add)	//set 地址
{
	address=add;
}
string Package::getAddress()
{
	return address;
}
void Package::setCity(string cit)	//set 城市
{
	city=cit;	
} 
string Package::getCity()
{
	return city;
}
void Package::setState(string sta)	//set 所在州 
{
	state=sta;	
}
string Package::getState()
{
	return state;
}
void Package::setPostalCode(string code)	//set 邮政编码
{
	postalcode = code;
}
string Package::getPostalCode()
{
	return postalcode;
}	
void Package::setWeight(double we)
{
	if(we>0)
	{
		weight=we;
	}
	else
		throw invalid_argument("weight must be > 0");
}
double Package::getWeight()
{
	return weight;
}
void Package::setFee(double fe)
{
	if(fe>0)
	{
		fee=fe;
	}
	else
	{        
		throw invalid_argument("fee must be > 0");
	}
}              
double Package::getFee()
{
	return fee;
}
double Package::CalculateCost()
{
	return getWeight()*getFee();
}
