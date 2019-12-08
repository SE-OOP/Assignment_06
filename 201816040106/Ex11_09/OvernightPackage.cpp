#include"Package.h"
#include"OvernightPackage.h"
#include<string>
using namespace std;
OvernightPackage::OvernightPackage(string s,string cn,string ca,string cc1,string cc2,string p,double w,double f,double F):
    Package(s,cn,ca,cc1,cc2,p,w,f),extraFee(F){}
double OvernightPackage::calculateCost(){
    Package::setFee(Package::getFee()+extraFee);
    return Package::calculateCost();
}
