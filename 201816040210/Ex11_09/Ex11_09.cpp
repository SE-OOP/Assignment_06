#include<bits/stdc++.h>
#include "OvernightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"
using namespace std;
int main()
{
    Package a( "A","AA","AAA","AAAA","AAAAA","AAAAAA",5,20 );//create a Package
    TwoDayPackage b( "B","BB","BBB","BBBB","BBBBB","BBBBBB",5,20,10 );//create a TwoDayPackage
    OvernightPackage c( "C","CC","CCC","CCCC","CCCCC","CCCCCC",5,20,4 );//create a OvernightPackage
    //print a b and c
    a.print();
    cout<<"weight:"<<a.getWeight()<<"   unit cost:"<<a.getCost()<<"   total price:"<<a.calculateCost()<<"\n\n"<<endl;
    b.print();
    cout<<"weight:"<<b.getWeight()<<"   unit cost:"<<b.getCost()<<"   two day cost:"<<b.gettwodayCost()<<"   total price:"<<b.calculateCost()<<"\n\n"<<endl;
    c.print();
    cout<<"weight:"<<c.getWeight()<<"   unit cost:"<<c.getCost()<<"   extral cost:"<<c.getextralCost()<<"   total price:"<<c.calculateCost()<<endl;
    return 0;
}
