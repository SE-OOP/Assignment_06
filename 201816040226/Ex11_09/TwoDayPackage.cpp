#include "TwoDayPackage.h" // SavingsAccount class definition
using namespace std;
// constructor initializes balance and interest rate

TwoDayPackage::TwoDayPackage(
     string n1,string n2,string address,string city,string province,double postalCode, double w,double f,double dayPackage)
    :Package(n1,n2,address,city,province,postalCode,w,f)
{
    setDayPackage(dayPackage);
}
void TwoDayPackage::setDayPackage(double dayPackage)
{
    if(dayPackage>=0.0)
        DayPackage=dayPackage;
    else
        throw invalid_argument("dayPackage must be >= 0.0");
}
double TwoDayPackage::getDayPackage()
{
    return DayPackage;
}
// the calculateInterest member function to return the new calculateInterest
double TwoDayPackage::calculateCost()
{
    return DayPackage+(getWeight()*getFee());
}
void TwoDayPackage::print()
{
    Package::print();
    cout<<"\nTwoDayPackage:"<<DayPackage
    <<"\ncalculateCost:"<<calculateCost();

}
