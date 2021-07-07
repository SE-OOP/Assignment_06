#include<iostream>
#include<stdexcept>

#include"twodaypackage.h"

twodaypackage::twodaypackage(string &sname,string &rname,string &rad,string &rcity,string &rstate,int kc,double kp,double kw,double ktp)
    :package(sname,rname,rad,rcity,rstate,kc,kp,kw)
    {

    }
    void twodaypackage::settwotip(double ktp)
    {
        if(ktp>=0)
            ktp=twotip;
        else
            throw invalid_argument("it should >=0");
        double twodaypackage::gettwotip()
        {
            return twotip;
        }

        double twodaypackage::calculatecost()
        {
            return gettwotip()+package::calculatecost();
        }

    }
