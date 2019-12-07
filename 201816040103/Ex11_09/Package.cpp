#include <iostream>
#include <string>
#include<iomanip>
#include<bits/stdc++.h>
#include "Package.h"
using namespace std;

Package::Package(const string &nam,const string &add,const string &cit,const string &sta,
		const string& pos,double wei,double fe)
{
	setName(nam);
	setAddress(add);
	setCity(cit);
	setState(sta);
	setPostcode(pos);
	setWeight(wei);
	setFee(fe);
}

void Package::setName(string nam)
{
	name = nam;
} 

string Package::getName()
{
	return name;
}

void Package::setAddress(string add)
{
	address = add;
}

string Package::getAddress()
{
	return address;
}

void Package::setCity(string cit)
{
	city = cit;
}

string Package::getCity()
{
	return city;
}

void Package::setState(string sta)
{
	state = sta;
}

string Package::getState()
{
	return state;
}

void Package::setPostcode(string pos)
{
	postcode = pos;
}

string Package::getPostcode()
{
	return postcode;
}

void Package::setWeight(double wei)
{
	if(wei > 0)
		weight = wei;
	else
		throw invalid_argument("weight must be greater than 0");
}

double Package::getWeight()
{
	return weight;
}

void Package::setFee(double fe)
{
	if(fe > 0)
		fee = fe;
	else
		throw invalid_argument("fee must be greater than 0");	
}

double Package::getFee()
{
	return fee;
}

double Package::calculateCost()
{
	return getWeight()*getFee();
}
