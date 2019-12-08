//
//  OvernightPacking.hpp
//  Ex11_09
//
//  Created by misonomayubw on 2019/12/8.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef OvernightPacking_hpp
#define OvernightPacking_hpp

#include "Package.h"

class OvernightPackage:public Package
{
public:
    OvernightPackage(const string &, const string &, const string &, const string &,
             const string &, int=0, double=0, double=0,double=0 );
    void setExCost( double );
    double getExCost()const;
    double calculateCost()const;
    void display()const;
private:
    double exCost;
};

#endif
