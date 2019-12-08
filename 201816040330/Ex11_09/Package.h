#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>//C++ standard string class

using namespace std;

class Package
{
public:
    explicit Package(const string &,const string &,const string &,const string &,const string &,const string &,double=0.0,double=0.0);
    ~Package();//destructor
    void setWeight(double);//set weight
    double getWeight();//return weight
    void setFee(double);//set fee
    double getFee();//return fee
    double calculateCost(double,double);//calculateCost fee*weight


private:
    string sendername;
    string addresseename;
    string address;
    string city;
    string statement;
    string postalcode;
    double weight;
    double fee;//每盎司

};//end class Package


#endif // PACKAGE_H_INCLUDED
