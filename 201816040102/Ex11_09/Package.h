#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>

using namespace std;

class Package
{
public:
	Package (const string &,const string &,const string &,const string &,const string &,const string &,double,double);      //寄件人，收件人，地址，城市，所在州，邮政编码,重量，每盎司价格 
	void setSenderName(string );	//set 寄件人姓名
	string getSenderName();
	void setAddresseeName(string );	//set 收件人姓名
	string getAddresseeName();
	void setAddress(string );	//set 地址
	string getAddress();
	void setCity(string );	//set 城市 
	string getCity();
	void setState(string );	//set 所在州 
	string getState();
	void setPostalCode(string );	//set 邮政编码
	string getPostalCode();	
	void setWeight(double);
	double getWeight();
	void setFee(double);
	double getFee();
	double CalculateCost();
private:
	double weight;
	double fee;
	string sender;  
	string addressee;
	string address;
	string city;
	string state;
	string postalcode; 
};

#endif 
