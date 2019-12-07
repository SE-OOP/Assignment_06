#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
using namespace std;
class Package
{
public :
    Package(const string &,const string &,const string &,const string &,const string &,const string &,double ,double );
    void setsename(const string &);
    void setrename(const string &);
    void setaddress(const string &);
    void setcity(const string &);
    void setcontinent(const string &);
    void setpostalcode(const string &);
    void setweight(double);
    void setfee(double);
    double calculateCost();
    double getfee();
    void printf();
protected:
    string sename;
    string rename;
    string address;
    string city;
    string continent;
    string postalcode;
    double weight;
    double fee;
};


#endif // PACKAGE_H_INCLUDED
