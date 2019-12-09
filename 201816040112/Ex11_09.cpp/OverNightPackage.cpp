#include "OverNightPackage.h"
using namespace std;
onpack::onpack(string a,string b,string c,string d,string e,string f,double x,double y,double z):package(a,b,c,d,e,f,x,y)
{
    setexpweight(z);
}
void onpack::setexpweight(double z)
{
    if(z<0)
        z=0;
    expweight=z;

}
double onpack::getexpweight()
{
    return expweight;
}
double onpack::cale()
{
    setvalue(getvalue()+expweight);
    return calcuateCost();
}
