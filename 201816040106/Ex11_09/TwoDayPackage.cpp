#include<string>
#include"Package.h"
#include"TwoDayPackage.h"
using namespace std;
TwoDayPackage::TwoDayPackage(string s,string cn,string ca,string cc1,string cc2,string p,double w,double f,double F):
    Package(s,cn,ca,cc1,cc2,p,w,f),flatFee(F){}
double TwoDayPackage::calculateCost(){
    return Package::calculateCost()+flatFee;
}
