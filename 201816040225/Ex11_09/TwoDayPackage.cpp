#include<iostream>
#include<stdexcept>
#include"TwoDayPackage.h"//class define

using namespace std;
TwoDayPackage::TwoDayPackage(const string &nm1,const string &nm2,const string &loc,const string &ct,const string &sta,
                 const string &coding,double weights,double fees,double pay)
                 :Package(nm1,nm2,loc,ct,sta,coding,weights,fees)
                 {
                     setDayPay(pay);//set day pay
                 }
    void TwoDayPackage::setDayPay(double pay)
    {
        daypay=pay;
    }
   double TwoDayPackage::getDayPay()//get the pay
   {
       return daypay;
   }
   double TwoDayPackage::calculateCost()//the new calculate function
    {
      return Package::calculateCost()+getDayPay();
    }

  void TwoDayPackage::print()//print the message
  {
      cout<<"TwoDayPackage information is the following:\n"
    <<"\nthe send name is :"<<Package::getSend()
    <<"\nthe received name is :"<<getReceived()
    <<"\nthe address is :"<<getHome()
    <<"\nthe city is :"<<getCity()
    <<"\nthe state is :"<<getState()
    <<"\nthe coding is :"<<getMember()
    <<"\nthe weights is :"<<getWeight()
    <<"\nthe fees is :"<<getFee()
    <<"\nthe two days pay is: "<<getDayPay()<<endl;
    cout<<"the payment is :"<<calculateCost();
    cout<<"\n\n";

  }
