#include <iostream>
#include <string>
#include <stdexcept>
#include "Package.h"
using namespace std ;
Package::Package(const string &s, const string &r,const string &a, const string &c, const string &st,const string &po,double w ,double ra)
{
     sender_name=s ;
     Recipient_name=r ;
     address=a ;
     city=c ;
     state=st ;
     Postal_Code=po ;
     setWeight(w) ;
     setRate(ra)  ;
}//构造函数
void Package::setWeight(double w)
{
    if (w>0.0)
    {
        weight=w ;
    }
    else
    {
        throw invalid_argument("weight must be >0") ;
    }
}//weight的输入
double Package::getrate()
{
    return rate ;
}
double Package::getweight()
{
    return weight ;
}//每公斤重量
void Package::setRate(double s)
{
    if (s>0.0)
    {
        rate=s ;
    }
    else
    {
        throw invalid_argument("rate must be >0") ;
    }
}
const double Package::calculate_Cost()
{
    return weight*rate ;
}//计算钱
string Package::getrname ()
{
    return Recipient_name  ;
}
string Package::getsname()
{
   return     sender_name ;
}
string Package::getadd ()
{
    return address ;
}//地址
string Package::getci ()
{
    return city ;
}//城市
string Package::getsta ()
{
    return  state ;
}//州
string Package::getpos ()
{
    return Postal_Code ;
}//邮政
