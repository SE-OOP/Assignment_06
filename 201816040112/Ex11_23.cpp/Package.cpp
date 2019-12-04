#include "Package.h"
using namespace std;
package::package(string a,string b,string c,string d,string e,string f,double x,double y)
{
    sname=a;
    gname=b;
    scity=c;
    gcity=e;
    snum=e;
    gnum=f;
    setweight(x);
    setvalue(y);




}
void package::setweight(double a)
{
    if(a<=0)
        a=0;
    weight=a;
}
void package::setvalue(double a)
{
    if(a<=0)
        a=0;
    value=a;
}
double package::getweight()
{
    return weight;
}
double package::getvalue()
{
    return value;
}
double package::calcuateCost()
{
    return value*weight;
}
