#include <stdexcept>
#include "Package.h"

using namespace std;

/*initializing the package by using set*/
Package::Package( const string &jn, const string &sn, const string &jp, const string &sp, const string &jc, const string &sc,
                  const string &js, const string &ss, const string &jpc, const string &spc, double wei, double pri )
{
    setjname( jn );
    setsname( sn );
    setjplace( jp );
    setsplace( sp );
    setjcity( jc );
    setscity( sc );
    setjstate( js );
    setsstate( ss );
    setjpostalcode( jpc );
    setspostalcode( spc );
    setweight( wei );
    setprice( pri );
}
void Package::setjname( const string &jn )
{
    jname=jn;
}
void Package::setsname( const string &sn )
{
    sname=sn;
}
void Package::setjplace( const string &jp )
{
    jplace=jp;
}
void Package::setsplace( const string &sp )
{
    splace=sp;
}
void Package::setjcity( const string &jc )
{
    jcity=jc;
}
void Package::setscity( const string &sc )
{
    scity=sc;
}
void Package::setjstate( const string &js )
{
    jstate=js;
}
void Package::setsstate( const string &ss )
{
    sstate=ss;
}
void Package::setjpostalcode( const string &jpc )
{
    jpostalcode=jpc;
}
void Package::setspostalcode( const string &spc )
{
    spostalcode=spc;
}
/*The package's weight must >=0*/
void Package::setweight( double wei )
{
    if(wei>=0)
        weight=wei;
    else
        throw invalid_argument("the weight must more than 0");
}
/*The package's freight must >=0*/
void Package::setprice( double pri )
{
    if(pri>=0)
        price=pri;
    else
        throw invalid_argument("the price must more than 0");
}
string Package::getjname() const
{
    return jname;
}
string Package::getsname() const
{
    return sname;
}
string Package::getjplace() const
{
    return jplace;
}
string Package::getsplace() const
{
    return splace;
}
string Package::getjcity() const
{
    return jcity;
}
string Package::getscity() const
{
    return scity;
}
string Package::getjstate() const
{
    return jstate;
}
string Package::getsstate() const
{
    return sstate;
}
string Package::getjpostalcode() const
{
    return jpostalcode;
}
string Package::getspostalcode() const
{
    return spostalcode;
}
double Package::getweight() const
{
    return weight;
}
double Package::getprice() const
{
    return price;
}
/*Return the gross freight,it is equal weight * price;*/
double Package::calculateCost()
{
    return getweight()*getprice();
}
