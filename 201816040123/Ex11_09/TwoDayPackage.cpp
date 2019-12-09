#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage( const string &a, const string &b, const string &c,
         const string &d, const string &e, int f, double g, double h,double i )
         :Package(a,b,c,d,e,f,g,h)
{
    setPjf( i );
}
void TwoDayPackage::setPjf( double a )
{
    if(a>0)
        pjf=a;
    else
    {
        cerr<<"weight<=0"<<endl;
        exit(0);
    }
}
double TwoDayPackage::getPjf()const
{
    return pjf;
}
double TwoDayPackage::calculateCost()const
{
    return Package::calculateCost()+pjf;
}
void TwoDayPackage::display()const
{
    Package::display();
    cout<<setw(5)<<calculateCost()<<"   TwoDayPackage  平寄费:"<<setw(5)<<getPjf()<<endl;
}
