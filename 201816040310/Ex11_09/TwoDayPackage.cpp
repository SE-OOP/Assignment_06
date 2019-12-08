#include "TwoDayPackage.h"
#include <iostream>

using namespace std;

TwoDayPackage::TwoDayPackage(string reciver,string address, 
					string city,string state,
					string zipCode,
					double weight,double cost,
					double ordinaryCost):
Package(reciver,address,city,state,zipCode,weight,cost)
{
	this->ordinaryCost=ordinaryCost>0?ordinaryCost:1;// Construct 
}


double TwoDayPackage::calculateCost(){
	//Total cost is weight*cost add ordinaryCost
	return weight*cost+ordinaryCost;
}

// print the package's infomation
void TwoDayPackage::print(){ 
	cout<<"-------TwoDayPackage-------"<<endl;
	cout<<"To: "<<getReciver()<<endl
		<<"Weight: "<<getWeight()<<endl
		<<"Address: "<<getState()<<" "<<getCity()<<" "<<getAddress()<<" "<<endl
		<<"Zipcode: "<<getZipCode()<<endl
		<<"Cost : "<<calculateCost()<<endl;
}