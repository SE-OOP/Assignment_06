//
//  OvernightPackage.hpp
//  ass6
//
//  Created by MacBook Pro on 2019/12/3.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#ifndef OvernightPackage_hpp
#define OvernightPackage_hpp
#include "Package.hpp"
#include <stdio.h>
using namespace std;
class OvernightPackage:public Package{
public:
    OvernightPackage(double,double,double);
    double calculateCost();
private:
    double fee;
    double newfee;
};
#endif /* OvernightPackage_hpp */
