#include <iostream>
#include <iomanip>
using namespace std;
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{
    Package a("Bob","Zzc","1","1","1","111",10,2);//20,Initializes a Package object
    TwoDayPackage b("Coc","zzc","1","1","1","111",10,2,10);//30,Initializes a TwoDayPackage object
    OvernightPackage c("Dod","zzc","1","1","1","111",10,2,0.5);//25,Initializes a OvernightPackage object
    cout<<fixed<<setprecision(2);
    //Output Package object
    cout << "\nsender name is " << a.getsendp()
      << "\naccepter name is " << a.getacceptp()
      << "\naddress is " << a.getaddress()
      << "\nstate is " << a.getstate()
      << "\nzip code is " << a.getzipcode()
      << "\nweight is " << a.getweight()
      << "\nprice is " << a.getprice()
      << "\ncost is " << a.calculateCost()
      << endl;
    //Output TwoDayPackage object
    cout << "\nsender name is " << b.getsendp()
      << "\naccepter name is " << b.getacceptp()
      << "\naddress is " << b.getaddress()
      << "\nstate is " << b.getstate()
      << "\nzip code is " << b.getzipcode()
      << "\nweight is " << b.getweight()
      << "\nprice is " << b.getprice()
      << "\nTDFee is " << b.getTDFee()
      << "\ncost is " << b.calculateCost()
      << endl;
    //Output OvernightPackage object
    cout << "\nsender name is " << c.getsendp()
      << "\naccepter name is " << c.getacceptp()
      << "\naddress is " << c.getaddress()
      << "\nstate is " << c.getstate()
      << "\nzip code is " << c.getzipcode()
      << "\nweight is " << c.getweight()
      << "\nprice is " << c.getprice()
      << "\nevOFee is " << c.getevOFee()
      << "\ncost is " << c.calculateCost()
      << endl;
}
