#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using namespace std;

class Package
{
public:
	Package(const string &,const string &,const string &,const string &,
		const string &,double,double);
	void setName(string);
	string getName();
	void setAddress(string);
	string getAddress();
	void setCity(string);
	string getCity();
	void setState(string);
	string getState();
	void setPostcode(string);
	string getPostcode();
	void setWeight(double);
	double getWeight();
	void setFee(double);
	double getFee();
	double calculateCost();
	
protected:
	string name;
	string address;
	string city;
	string state;
	string postcode;
	double weight;
	double fee;	
};
#endif
