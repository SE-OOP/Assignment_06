#ifndef OVERNINGHTPACKAGE.H
#define OVERNINGHTPACKAGE.H

#include"Package.h"
#include<iostream>
#include<string>

using namespace std;


class OverningPackage : public Package
{
    OverningPackage(string ,string ,string ,int ,double ,double ,double);

    void setcharge(double);

private:

    double charge;


};












#endif
