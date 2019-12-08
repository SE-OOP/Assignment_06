//Ex11_09:Package.cpp
#include <iostream>
#include <string>
#include "Package.h"
using namespace std;

//construct seven messages
Package::Package(const string& n, const string& a, const string& c, const string& s, const string& pN, double w, double f)
{
	name = n;
	address = a;
	city = c;
	state = s;
	postNumber = pN;
	if (w > 0)
		weight = w;
	else
		cout << "Weight is out of range!";
	if (f > 0)
		fee = f;
	else
		cout << "Fee is out of range!";
}

// fuction to calaulate fee
double Package::calculateCost()
{
	return weight * fee;
}
string Package::getName()
{
	return name;
}

//fuction to retrieve address
string Package::getAddress()
{
	return address;
}

//fuction to retrieve city
string Package::getCity()
{
	return city;
}

//fuction to retrieve state
string Package::getState()
{
	return state;
}

//fuction to retrieve postnumber
string Package::getPostNumber()
{
	return postNumber;
}

//fuction to retrieve weight
double Package::getWeight()
{
	return weight;
}

//fuction to retrieve fee
double Package::getFee()
{
	return fee;
}
