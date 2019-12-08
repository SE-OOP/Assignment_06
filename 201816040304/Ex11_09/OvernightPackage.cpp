#include <string>
#include"OvernightPackage.h"
using namespace std;


OvernightPackage::OvernightPackage(string a,string b,string c,string d,string e,string f,string g,string h,string i,string j,
                                    double k,double l,double fee)
:Package( a, b, c, d, e, f, g, h, i, j, k, l),AdditionalCosts(fee)
{

}

double OvernightPackage::calculateCost()
{
    return getWeight()*(getCostPerCup()+AdditionalCosts);
}
