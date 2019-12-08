//
//  OvernightPacking.cpp
//  Ex11_09
//
//  Created by misonomayubw on 2019/12/8.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include "OvernightPacking.hpp"
#include <iostream>

using namespace std;


void OvernightPackage::setExCost( double sn )
{
    if(sn>0)
        exCost=sn;
    else
    {
        cerr<<"excost<=0"<<endl;
        exit(0);
    }
}
double OvernightPackage::getExCost()const
{
    return exCost;
}
double OvernightPackage::calculateCost()const
{
    return Package::getWight()*(Package::getCost()+exCost);
}
void OvernightPackage::display()const
{
    Package::display();
    cout<<setw(5)<<calculateCost()<<"OvernightPackage :"<<getExCost()<<endl;
}
