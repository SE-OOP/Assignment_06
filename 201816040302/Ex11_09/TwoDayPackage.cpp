#include<iostream>
#include<iomanip>
#include<string>
#include"TowDayPackage.h"
using namespace std;

TowDayPackage::TowDayPackage(const string &den,const string &dea,const string &dec,const string &des,const string &deco,
            const string &ren,const string &rea,const string &rec,const string &res,const string &reco,
            const double &w,const double &p,const double &f)
            :Package(den,dea,dec,des,deco,ren,rea,rec,res,reco,w,p)
{
    setFee(f);
}
double TwoDayPackage::calculateCost()
{
    return please+Package::calculateCost();
}
