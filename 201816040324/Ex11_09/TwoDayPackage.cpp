#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"
using namespace std ;
TwoDayPackage::TwoDayPackage(const string &s, const string &r,const string &a, const string &c, const string &st,const string &po,double w ,double ra,double co)
:Package(s, r, a, c, st, po, w, ra)
{
    twodaycost=co ;
}
double TwoDayPackage::calculate_Cost()
{
    return twodaycost+Package::calculate_Cost() ;//花费=额外付费+重量*每公斤价钱
}
void TwoDayPackage::print ()
{
    cout << fixed << setprecision( 2 );
    cout<<"Recipient name : "<<Package::getrname () <<"\n" ;
    cout<<"send name : "<<Package::getsname() <<"\n" ;
    cout<<"address : "<<Package:: getadd () <<"\n" ;
    cout<<"city : "<<Package:: getci () <<"\n" ;
    cout<<"state : "<<Package:: getsta () <<"\n" ;
    cout<<"poscode : "<<Package:: getpos () <<"\n" ;
    cout<<"weight : "<<Package::getweight ()<<"\n" ;
    cout<<"rate : "<<Package::getrate () <<"\n" ;
    cout<<"twodaycost : "<<twodaycost<<"\n" ;
    cout<<"pay : "<<calculate_Cost()<<"\n\n\n\n" ;
}
