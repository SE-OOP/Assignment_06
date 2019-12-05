#include"OvernightPackage.h"
#include<iostream>
#include<string>

using namespace std;



OverningPackage::OverningPackage(string na,string add,string c,int po,double p,double w,double f)
:Package(na,add,c,po,p,w)
{
    setcharge(f);

}
void OverningPackage::setcharge(double c)
{
    charge = c;

}




















