#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>
#include "Package.h"
#include "OvernightPackage.h"
using namespace std ;
OvernightPackage::OvernightPackage(const string &s, const string &r,const string &a, const string &c, const string &st,const string &po,double w ,double ra,double co)
:Package(s, r, a, c, st, po, w, ra)
{
    weightcost=co ;
}
double OvernightPackage::calculate_Cost()
{
    return Package::getweight()*(Package::getrate()+weightcost) ;//花费=重量*（每公斤的价钱+需要额外增加的没公斤价钱）
}
void OvernightPackage::print ()
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
    cout<<"addrate : "<<weightcost<<"\n" ;
    cout<<"pay: "<<calculate_Cost ()<<"\n\n\n\n"  ;
}//输出函数
