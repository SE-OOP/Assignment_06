#include<bits/stdc++.h>
#include"Package.h"
using namespace std;
package::package(string sen,string name,string adre,string cit,string code,double wei,double money)
{
    sender=sen,Recipient=name,Address=adre,City=cit,Postcode=code;
    Weight=wei;
    money>0?charge=money:charge=0;
}
double package::calculateCost()
{
    return Weight*charge;
}
void package::addcharge(double x)
{
    charge+=x;

}

