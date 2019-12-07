#include <iostream>
#include "Package.cpp"
#include "OvernightPackage.cpp"
#include "TwoDayPackage.cpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	OvernightPackage a("Tom","lianhuajie","zhengzhou","henan","1111",10,5,1);
	TwoDayPackage b("Bob","qunli","haerbin","heilongjiang","2222",20,3,2);
	cout<<"Name :"<<a.getName()<<endl;
	cout<<"Address :"<<a.getAddress()<<endl;
	cout<<"City :"<<a.getCity()<<endl;
	cout<<"State :"<<a.getState()<<endl;
	cout<<"Postcode :"<<a.getPostcode()<<endl;
	cout<<"Weight :"<<a.getWeight()<<endl;
	cout<<"Fee :"<<a.getFee()<<endl;
	cout<<"calculateCost :"<<a.calculateCost()<<endl;
	cout<<endl;
	cout<<"Name :"<<b.getName()<<endl;
	cout<<"Address :"<<b.getAddress()<<endl;
	cout<<"City :"<<b.getCity()<<endl;
	cout<<"State :"<<b.getState()<<endl;
	cout<<"Postcode :"<<b.getPostcode()<<endl;
	cout<<"Weight :"<<b.getWeight()<<endl;
	cout<<"Fee :"<<b.getFee()<<endl;
	cout<<"calculateCost :"<<b.calculateCost();
}
