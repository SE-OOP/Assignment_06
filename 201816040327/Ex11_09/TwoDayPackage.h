//
//  TwoDayPackage.hpp
//  Ex11_09
//
//  Created by misonomayubw on 2019/12/8.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef TwoDayPackage_hpp
#define TwoDayPackage_hpp

#include <stdio.h>
#include <iostream>

using namespace std;
class TwoDayPackage : public Package
{
public:
    TwoDayPackage (const string &, const string &, const string &, const string &, const string &, const string &);
    TwoDayPackage (double = 0.0, double = 0.0, double = 0.0);
    void setFlatFee(double);
    double getFlatFee()const;
    double calculateConst()const;
private:
    double flatFee;

};
