#ifndef PACKAGE_H
#define  PACKAGE_H
#include<string>
using namespace std;

class Package {
public:
	Package(double,double);
	double calculateCost();
	double getWeight();
	double getPrice();
private:
	string namesjr;
	string namejjr;
	string address;
	string city;
	string state;
	string encoding;
	double weight;
	double price;
};
#endif 

