#include <bits/stdc++.h>

#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;
int main()
{
    Package a("Bob","Luise","Henan University of Technology","ZhengZhou","HeNan","120000",4.0,5.0);
    cout<<"Sender :"<<a.getsender()<<endl<<"recipient :"<<a.getrecipient()<<endl;
    cout<<"address :"<<a.getaddress()<<endl<<"city :"<<a.getcity()<<endl;
    cout<<"state :"<<a.getstate()<<endl<<"postalcode :"<<a.getpostalcode()<<endl;
    cout<<"Cost :"<<a.calculateCost()<<endl;
    cout<<endl<<endl;

    TwoDayPackage b("Bob","Luise","Henan University of Technology","ZhengZhou","HeNan","120000",4.0,5.0,10.0);
    cout<<"Sender :"<<b.getsender()<<endl<<"recipient :"<<b.getrecipient()<<endl;
    cout<<"address :"<<b.getaddress()<<endl<<"city :"<<b.getcity()<<endl;
    cout<<"state :"<<b.getstate()<<endl<<"postalcode :"<<b.getpostalcode()<<endl;
    cout<<"Cost :"<<b.calculateCost()<<endl;
    cout<<endl<<endl;

    OvernightPackage c("Bob","Luise","Henan University of Technology","ZhengZhou","HeNan","120000",4.0,5.0,10.0);
    cout<<"Sender :"<<c.getsender()<<endl<<"recipient :"<<c.getrecipient()<<endl;
    cout<<"address :"<<c.getaddress()<<endl<<"city :"<<c.getcity()<<endl;
    cout<<"state :"<<c.getstate()<<endl<<"postalcode :"<<c.getpostalcode()<<endl;
    cout<<"Cost :"<<c.calculateCost()<<endl;
    cout<<endl<<endl;
}
