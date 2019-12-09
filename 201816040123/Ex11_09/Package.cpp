#include "Package.h"
using namespace std;

Package::Package( const string &a, const string &b, const string &c,
         const string &d, const string &e, int f, double g, double h)
{
    setJjr( a );
    setSjr( b );
    setSite( c );
    setCity( d );
    setState( e );
    setYzbm( f );
    setWight( g );
    setCost( h );
}
void Package::setJjr( const string& a)
{
    jjr=a;
}
string Package::getJjr()const
{
    return jjr;
}
void Package::setSjr( const string& a)
{
    sjr=a;
}
string Package::getSjr()const
{
    return sjr;
}
void Package::setSite( const string& a)
{
    site=a;
}
string Package::getSite()const
{
    return site;
}
void Package::setCity( const string& a)
{
    city=a;
}
string Package::getCity()const
{
    return city;
}
void Package::setState( const string& a)
{
    state=a;
}
string Package::getState()const
{
    return state;
}
void Package::setYzbm( int a )
{
    yzbm=a;
}
int Package::getYzbm()const
{
    return yzbm;
}
void Package::setWight( double a )
{
    if(a>0)
        wight=a;
    else
    {
        cerr<<"weight<=0"<<endl;
        exit(0);
    }
}
double Package::getWight()const
{
    return wight;
}
void Package::setCost( double a )
{
    if(a>0)
        cost=a;
    else
    {
        cerr<<"cost<=0"<<endl;
        exit(0);
    }
}
double Package::getCost()const
{
    return cost;
}
double Package::calculateCost()const
{
    return getWight()*getCost();
}
void Package::display()const
{
    cout<<setw(6)<<getJjr()<<setw(8)<<getSjr()<<setw(12)<<getSite()<<setw(10)<<getCity()<<setw(8)
    <<getState()<<setw(10)<<getYzbm()<<setw(5)<<getWight()<<setw(5)<<getCost();
}
