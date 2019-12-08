#include <iostream>
#include <stdexcept>
#include"Package.h"//get the class name
using namespace std;
Package::Package(const string &nm1,const string &nm2,const string &loc,const string &ct,const string &sta,
                 const string &coding,double weights,double fees)
                 :name1(nm1),name2(nm2),address(loc),city(ct),state(sta),code(coding)
                 {
                     setWeight(weights);
                     setFee(fees);
                 }//constructor
    void Package::setSend(const string &nm1)//function to set and get name
    {
        name1=nm1;
    }
    string Package:: getSend()const
    {
      return name1;
    }

    void  Package::setReceived(const string &nm2)
    {
        name2=nm2;
    }
    string Package::getReceived()const
    {
        return name2;
    }

    void Package::setHome(const string &loc)//function to set and get address
    {
        address=loc;
    }
    string Package::getHome()const
    {
        return address;
    }

    void Package:: setCity(const string &ct)
    {
        city=ct;
    }
    string Package::getCity()const
    {
        return city;
    }

    void Package::setState(const string &sta)
    {
        state=sta;
    }
    string Package::getState()const
    {
        return state;
    }

    void Package::setMember(const string &coding)//function to set and get code
    {
        code=coding;
    }
    string Package::getMember()const
    {
        return code;
    }

    void Package::setWeight(double weights)//the weights
    {
        if(weights>=0.0)
            weight=weights;
        else
            throw invalid_argument("Weight must be >=0.0");
    }

    double Package::getWeight()const
    {
        return weight;
    }

    void Package::setFee(double fees)//the fees
    {
        if(fees>=0.0)
          fee=fees;
          else
            throw invalid_argument("Fee must be >=0.0");
    }
    double Package::getFee()const
    {
        return fee;
    }

    double Package::calculateCost()const//calculate function
    {
      return fee*weight;
    }

