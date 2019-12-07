#include <iostream>
#include "OvernightPackage.h"
using namespace std;
#include <string>
#include <iomanip>
#include <stdexcept>
#include "TwoDayPackage.h"
int main()
{
    OvernightPackage p("Bob","peter","New York","USA","conlianfolia","oooo",1.1,2.1,0.5);
    cout<<"the information of the sending message is"<<endl;
    p.printf();
    cout<<"the OvernightPackage fee is  "<<p.CalculateCost()<<endl;
    TwoDayPackage p("Bob","peter","New York","USA","conlianfolia","oooo",1.1,2.1,0.5);
    cout<<"the information of the sending message is"<<endl;
    p.printf();
    cout<<"the TwoDayPackage fee is  "<<p.CalculateCost()<<endl;
}
