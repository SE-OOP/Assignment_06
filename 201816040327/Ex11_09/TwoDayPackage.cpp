//
//  TwoDayPackage.cpp
//  Ex11_09
//
//  Created by misonomayubw on 2019/12/8.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include "TwoDayPackage.hpp"
#include <iostream>

using namespace std;

TwoDayPackage :: TwoDayPackage(
                   const string &sn,const string &rn, const string &ra, const string &rp, const string &rc, const string &rz
                   double weight, double fe, double ff)
                   : Package (sn, rn, ra, rp, rc, rz, weight, fe)
{
        setFlatFee(ff);
}
void TwoDayPackage :: calculateConst(double ff)
{
    if(ff >=0.0)
        flatFee = ff;
    else
        cout << "Flat Fee must be >=0.0" << endl;
}
double TwoDayPackage :: calculateConst()const
{
    double ret = (packageWeight * fee )+ flatFee;
    return ret;
}
