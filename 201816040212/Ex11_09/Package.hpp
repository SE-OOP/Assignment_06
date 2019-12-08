//
//  Package.hpp
//  ass6
//
//  Created by MacBook Pro on 2019/12/3.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#ifndef Package_hpp
#define Package_hpp
#include <string>
#include <stdio.h>
using namespace std;
class Package{
public:
    Package(double,double);
    double calculateCost();
    void setweight(double);
    void setcount(double);
private:
    //string name;
    //string address;
    //string city;
    double weight;
    double fee;
};
#endif /* Package_hpp */
