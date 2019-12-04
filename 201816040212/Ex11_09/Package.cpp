//
//  Package.cpp
//  ass6
//
//  Created by MacBook Pro on 2019/12/3.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include "Package.hpp"
using namespace std;
Package::Package(double x,double y){
    
}
void Package::setweight(double x){
    if(x>=0.00)weight=x;
    else weight=0.00;
}
void Package::setcount(double x){
    if(x>=0.00)fee=x;
    else fee=0;
}
double Package::calculateCost(){
    return weight*fee;
}
