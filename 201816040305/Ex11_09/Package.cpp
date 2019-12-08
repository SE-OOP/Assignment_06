#include <iostream>
#include <string>
using namespace std;
#ifndef PACKAGE_H
#define PACKAGE_H
#include "Package.h"

Package::Package(char name , char address , char city , char state ,int zipcode , double heavy , double fee)
{
    setName(name);
    setAdress(address);
    setCity(city) ;
    setState(state);
    setZipCode(zipcode);
    setHeavy(heavy);
    setFee(fee);
}

void Package::setName(char name)
{
    Name = name ;
}

char Package::getName()
{
    return Name ;
}

void Package::setAdress(char address)
{
    Address = address ;
}

char Package::getAddress()
{
    return Address ;
}

void Package::setCity(char city)
{
    City = city ;
}

char Package::getCity()
{
    return City ;
}

void Package::setState(char state)
{
    State = state ;
}

char Package::getState()
{
    return State ;
}


void Package::setZipCode(int zipcode)
{
    Zipcode = zipcode ;
}

int Package::getZipCode()
{
    return Zipcode;
}

void Package::setHeavy(double heavy)
{
    if(heavy>=0)
        Heavy = heavy;
    else
        {
        Heavy = 1;
        cout<<"heavy must bigger than 0!"<<endl;
        }
}

double Package::getHeavy()
{
    return Heavy;
}

void Package::setFee(double fee)
{
    if(fee>=0)
    Fee = fee ;
    else{
        cout<<"Fee must bigger than 0!"<<endl;
        Fee = 1;
    }
}

double Package::getFee()
{
    return Fee ;
}

double Package::CalculateCost()
{
    double Cost ;
    Cost = Heavy*Fee ;
    return Cost;
}

#endif // _PACKAGE_H_
