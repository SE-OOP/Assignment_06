//
//  TwoDayPackege.hpp
//  ass6
//
//  Created by MacBook Pro on 2019/12/3.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#ifndef TwoDayPackege_hpp
#define TwoDayPackege_hpp
#include "Package.hpp"
#include <stdio.h>
using namespace std;
class TwoDayPackage:public Package{
public:
    TwoDayPackage(double,double,double);
    double calculateCost();
private:
    double newfee;
};
#endif /* TwoDayPackege_hpp */
