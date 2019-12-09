//Ex11_09:Package.h
#include <iostream>
#include <string>
using namespace std;
//class Package definition
#ifndef PACKAGE_H
#define PACKAGE_H
class Package
{
public:
	//constructor define
	Package(const string&, const string&, const string&, const string&, const string&, double = 0.0, double = 0.0);
	virtual double calculateCost();// fuction to calaulate fee
	string getName();//fuction to retrieve name
	string getAddress();//fuction to retrieve address
	string getCity();//fuction to retrieve city
	string getState();//fuction to retrieve state
	string getPostNumber();//fuction to retrieve postnumber
	double getWeight();//fuction to retrieve weight
	double getFee();//fuction to retrieve fee
private:
	string name;
	string address;
	string city;
	string state;
	string postNumber;
	double weight;
	double fee;
};
#endif // !PACKAGE_H
