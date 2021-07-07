#include<iostream>
#include<stdexcept>
#include"overnightpackage.h"

overnightpackage::overnightpackage(string &sname,string &rname,string &rad,string &rcity,string &rstate,int kc,double kp,double kw,double kt)
    :package(sname,rname,rad,rcity,rstate,kc,kp,kw)
    {

    }
  void  overnightpackage::settip(double kt)
    {
        if(kt>=0)
            kt=tip;
        else
            throw invalid_argument("should >=0");

    }
    double overnightpackage::gettip()
    {
        return tip;
    }

    double overnightpackage::calculatecost()
    {
        return gettip()*getweight+package::calculatecost();
    }
