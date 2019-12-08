#include <iostream>

using namespace std;
#include"Package.h"

Package::Package(string s,string r,string sta,string cit,int pos,double w,double c):
    sender(s),recipient(r),state(sta),city(cit),postal(pos),weight(w),cost(c)
{

}

double Package::getWeight()
{
    return weight;
}
double Package::getCost()
{
    return cost;
}

void Package::point()
{
    cout << "sender: " << sender <<endl<<"recipient: "<<recipient<<endl<<"state: "<<state<<endl<<"city: "<<city
    <<endl<<"postal: "<<postal<<endl<<"weight: "<<weight<<endl<<"cost: "<<cost<<endl;
}

double Package::calculateCost()
{
    return weight*cost;
}
