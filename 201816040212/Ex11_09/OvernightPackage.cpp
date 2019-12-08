//
//  OvernightPackage.cpp
//  ass6
//
//  Created by MacBook Pro on 2019/12/3.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include "OvernightPackage.hpp"

OvernightPackage::OvernightPackage(double x,double y,double z):Package(x,y),newfee(z){}
double OvernightPackage::calculateCost(){
    fee+=newfee;
    return Package::calculateCost();
}
