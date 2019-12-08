#include<iostream>
#include<iomanip>
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
#include"Package.h"
using namespace std;

int main()
{
   Package thing1("Bob Lewis","Sue Jones","zhongguo","zhengzhou","henan","11122","2.8","8");
   TwoDayPackage thing2("Bob Lewis","Sue Jones","zhongguo","zhengzhou","henan","11122","2.8","8","5");
   OverNightPackage thing3("Bob Lewis","Sue Jones","zhongguo","zhengzhou","henan","11122","2.8","8","2");

    cout<<"Package1: "<<endl;
    cout<<"The sender is : "<<thing1.getSender()
        <<"The Recipient is : "<<thing1.getRecipient()
        <<"The Address is : "<<thing1.getAddress()
        <<"The City is : "<<thing1.getCity()
        <<"The State is : "<<thing1.getState()
        <<"The weight is : "<<thing1.getWeight()
        <<"The Fee is : "<<thing1.getMoney()
        <<"The postal number is : "<<thing1.getNumber();

    cout<<"The total Fee is : "<<thing1.calculateCost()<<endl;


    cout<<"Package2: "<<endl;
    cout<<"The sender is : "<<thing2.getSender()
        <<"The Recipient is : "<<thing2.getRecipient()
        <<"The Address is : "<<thing2.getAddress()
        <<"The City is : "<<thing2.getCity()
        <<"The State is : "<<thing2.getState()
        <<"The weight is : "<<thing2.getWeight()
        <<"The Fee is : "<<thing2.getMoney()
        <<"The postal number is : "<<thing2.getNumber();

    cout<<"The total Fee is : "<<thing2.calculateCost()<<endl;

    cout<<"Package3: "<<endl;
    cout<<"The sender is : "<<thing3.getSender()
        <<"The Recipient is : "<<thing3.getRecipient()
        <<"The Address is : "<<thing3.getAddress()
        <<"The City is : "<<thing3.getCity()
        <<"The State is : "<<thing3.getState()
        <<"The weight is : "<<thing3.getWeight()
        <<"The Fee is : "<<thing3.getMoney()
        <<"The postal number is : "<<thing3.getNumber();

    cout<<"The total Fee is : "<<thing3.calculateCost()<<endl;


}
