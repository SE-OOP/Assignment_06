//Package.cpp
#include <iostream>
#include <iomanip>
#include "Package.h"

using namespace std;

// constructor
Package::Package( const string &sname,const string &saddress,const string &scity,const string &sstate,const string &spostcode,
                  const string &rname,const string &raddress,const string &rcity,const string &rstate,const string &rpostcode,
                 double weight,double priceForPerOunce)
{
    if(weight>0.0&&priceForPerOunce>0.0)
    {
        setsName(sname);
        setsAddress(saddress);
        setsCity(scity);
        setsState(sstate);
        setsPostcode(spostcode);

        setrName(rname);
        setrAddress(raddress);
        setrCity(rcity);
        setrState(rstate);
        setrPostcode(rpostcode);

        setWeight(weight);
        setPriceForPerOunce(priceForPerOunce);
    }
    else
    {
        throw "Value of Weight or/and Price error!";
    }
}

void Package::setsName(string name)
{
   sName=name;
} // end function setName

// return the name
string Package::getsName()
{
   return sName;
} // end function getName


void Package::setsAddress(string address)
{
   sAddress=address;
} // end function setAddress

string Package::getsAddress()
{
   return sAddress;
} // end function getName

void Package::setsCity(string city)
{
   sCity=city;
} // end function setCity

string Package::getsCity()
{
   return sCity;
} // end function getCity

void Package::setsState(string state)
{
   sState=state;
} // end function setState

string Package::getsState()
{
   return sState;
} // end function getState

void Package::setsPostcode(string postcode)
{
   sPostcode=postcode;
} // end function setPostcode

string Package::getsPostcode()
{
   return sState;
} // end function getPostcode

void Package::setrName(string name)
{
   rName=name;
} // end function setName

// return the name
string Package::getrName()
{
   return rName;
} // end function getName


void Package::setrAddress(string address)
{
   rAddress=address;
} // end function setAddress

string Package::getrAddress()
{
   return rAddress;
} // end function getName

void Package::setrCity(string city)
{
   rCity=city;
} // end function setCity

string Package::getrCity()
{
   return rCity;
} // end function getCity

void Package::setrState(string state)
{
   rState=state;
} // end function setState

string Package::getrState()
{
   return rState;
} // end function getState

void Package::setrPostcode(string postcode)
{
   rPostcode=postcode;
} // end function setPostcode

string Package::getrPostcode()
{
   return rState;
} // end function getPostcode

void Package::setWeight(double weight)
{
   Weight=weight;
} // end function setWeight

double Package::getWeight()
{
   return Weight;
} // end function getWeight

void Package::setPriceForPerOunce(double priceForPerOunce)
{
   PriceForPerOunce=priceForPerOunce;
} // end function setPriceForPerOunce

double Package::getPriceForPerOunce()
{
   return PriceForPerOunce;
} // end function getPriceForPerOunce


void Package::print()
{
    cout<<"The sender's name is: "<<sName<<endl
    <<"The sender's address is: "<<sAddress<<endl
    <<"The sender's city is: "<<sCity<<endl
    <<"The sender's state is: "<<sState<<endl
    <<"The sender's postcode is: "<<sPostcode<<endl
    <<endl
    <<"The receiver's name is: "<<rName<<endl
    <<"The receiver's address is: "<<rAddress<<endl
    <<"The receiver's city is: "<<rCity<<endl
    <<"The receiver's state is: "<<rState<<endl
    <<"The receiver's postcode is: "<<rPostcode<<endl
    <<endl
    <<"The weight is: "<<Weight<<" ounce"<<endl
    <<"The PriceForPerOunce is: "<<"$"<<PriceForPerOunce<<endl;

}

//function calculateCost for class Package
double Package::calculateCost()
{
    return Weight*PriceForPerOunce;
}


