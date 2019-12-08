#include <iostream> 
#include "Package.h" 
#include "OvernightPackage.h" 
#include "TwoDayPackage.h"
#include <string>
using namespace std;

int main()
{
	OvernightPackage a("Wu","Wang Haoliang","lianhuajie","zhengzhou","henan","450000",20,3,1); 
	TwoDayPackage b("Wu","Yan Haokang","lianhuajie","zhengzhou","henan","450000",20,3,2);
	cout<<"OvernightPackage: "<<"\n";
	cout << "SenderName:"<<a.getSenderName()<<"\t"<<endl;
	cout << "AddresseeName"<<a.getAddresseeName()<<"\t"<<endl;
	cout<<"Address :"<<a.getAddress()<<"\t"<<endl; 
	cout<<"City :"<<a.getCity()<<"\t"<<endl; 
	cout<<"State :"<<a.getState()<<"\t"<<endl; 
	cout<<"Postalcode :"<<a.getPostalCode()<<"\t"<<endl; 
	cout<<"Weight :"<<a.getWeight()<<"\t"<<endl; 
	cout<<"Fee :"<<a.getFee()<<"\t"<<endl; 
	cout<<"CalculateCost :"<<a.CalculateCost()<<"\t"<<endl;
	cout<<"\n"<<endl;
	cout<<"TwoDayPackage: "<<"\n";
	cout << "SenderName:"<<b.getSenderName()<<"\t"<<endl;
	cout << "AddresseeName"<<b.getAddresseeName()<<"\t"<<endl;
	cout<<"Address :"<<b.getAddress()<<"\t"<<endl; 
	cout<<"City :"<<b.getCity()<<"\t"<<endl; 
	cout<<"State :"<<b.getState()<<"\t"<<endl; 
	cout<<"Postalcode :"<<b.getPostalCode()<<"\t"<<endl; 
	cout<<"Weight :"<<b.getWeight()<<"\t"<<endl; 
	cout<<"Fee :"<<b.getFee()<<"\t"<<endl; 
	cout<<"CalculateCost :"<<b.CalculateCost()<<"\t"<<endl;
	cout<<"\n"<<endl;
	
} 



