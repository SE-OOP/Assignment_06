//TwoDayPackage.cpp

#include"TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(string senderNam,string addresseeNam,string address0,string city0,string state0,string postCod,double weigh,double unitPric,double postAg)
    :Package(senderNam,addresseeNam,address0,city0,state0,postCod,weigh,unitPric)
{
    setPostAge(postAg);
}
void TwoDayPackage::setPostAge(double postAg)
{
    if(postAg>0)
    {
        postAge=postAg;
    }
    else
    {
        throw invalid_argument("postAge's value is error");
    }
}

double TwoDayPackage::getPostAge() const
{
    return postAge;
}
double TwoDayPackage::calculateCost() const //borrow base class's function calculate()
{
    return (getPostAge()+Package::calculateCost());
}
