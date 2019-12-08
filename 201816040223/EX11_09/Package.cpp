// Member-function definitions for class Package
#include <iostream>
using namespace std;

#include "Package.h" // include definition of class Package

// Package constructor
Package::Package( string &con,string &ship,string &sit,string &pla,string &sta,double zip,double wei,double co)
{
   consignee=con;
   shipper=ship;
   site=sit;
   place=pla;
   state=sta;
   setZipcode(zip);
   setWeight(wei);
   setCost(co);
} // end Account constructor

void Package::setConsignee( string &con )
{
  consignee=con;//
} // end function setConsignee


string Package::getConsignee()const
{
   return consignee;
} // end function getConsignee
void Package::setShipper( string &ship )
{
  shipper=ship;//
} // end function setShipper


string Package::getShipper()const
{
   return shipper;
} // end function getShipper
void Package::setSite( string &sit )
{
  site=sit;//
} // end function setSite


string Package::getSite()const
{
   return site;
} // end function getSite
void Package::setPlace( string &pla )
{
  place=pla;//
} // end function setPlace


string Package::getPlace()const
{
   return place;
} // end function getPlace
void Package::setState( string &sta )
{
  state=sta;//
} // end function setState


string Package::getState()const
{
   return state;
} // end function getState
void Package::setZipcode( double zip )
{
  zipcode=zip;//
} // end function setZipcode


double Package::getZipcode()const
{
   return zipcode;
} // end function getZipcode
void Package::setWeight(double wei )
{
  weight=wei;//
} // end function setWeight


double Package::getWeight()const
{
   return weight;
} // end function getWeight
void Package::setCost( double co )
{
  cost=co;//
} // end function setCost


double Package::getCost()const
{
   return cost;
} // end function getCost
double  Package::calculateCost()
{
    return weight*cost;
}
