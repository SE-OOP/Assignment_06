#include "OvernightPackage.h"
#include<iostream>
using namespace std;
OvernightPackage::OvernightPackage(string reciver,string address,
					string city,string state,
					string zipCode,
					double weight,double cost,
					double extraCost):
Package(reciver,address,city,state,zipCode,weight,cost)
{
	this->extraCost=extraCost>0?extraCost:1;
}

//
double OvernightPackage::calculateCost(){
	return weight*(cost+extraCost);
}

// print the package's infomation
void OvernightPackage::print(){
	cout<<"-------OvernightPackage-------"<<endl;
	cout<<"To: "<<getReciver()<<endl
		<<"Weight: "<<getWeight()<<endl
		<<"Address: "<<getState()<<" "<<getCity()<<" "<<getAddress()<<" "<<endl
		<<"Zipcode: "<<getZipCode()<<endl
		<<"Cost : "<<calculateCost()<<endl;
}