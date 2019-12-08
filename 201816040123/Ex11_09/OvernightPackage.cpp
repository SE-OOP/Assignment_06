#include "OvernightPackage.h"

OvernightPackage::OvernightPackage( const string &a, const string &b, const string &c,
         const string &d, const string &e, int f, double g, double h,double i )
         :Package(a,b,c,d,e,f,g,h)
{
    setExCost( i );
}
void OvernightPackage::setExCost( double a )
{
    if(a>0)
        exCost=a;
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
    cout<<setw(5)<<calculateCost()<<"   OvernightPackage  额外单价:"<<setw(5)<<getExCost()<<endl;
}
