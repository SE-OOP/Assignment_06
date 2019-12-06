#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>
using namespace std;

class Package
{
public:
    /*Base information for initializing packages*/
    Package( const string &, const string &, const string &, const string &, const string &, const string &,
             const string &, const string &, const string &, const string &, double, double );
    double calculateCost();
    /*set and get the property of Package, such as: janme, sname, jplace, splace, jcity, scity,
     jstate, state, jpostalcode, spostalcode, weight, price;*/
    void setjname( const string & );
    void setsname( const string & );
    void setjplace( const string & );
    void setsplace( const string & );
    void setjcity( const string & );
    void setscity( const string & );
    void setjstate( const string & );
    void setsstate( const string & );
    void setjpostalcode( const string & );
    void setspostalcode( const string & );
    void setweight( double );
    void setprice( double );
    string getjname() const;
    string getsname() const;
    string getjplace() const;
    string getsplace() const;
    string getjcity() const;
    string getscity() const;
    string getjstate() const;
    string getsstate() const;
    string getjpostalcode() const;
    string getspostalcode() const;
    double getweight() const;
    double getprice() const;
private:
    /*The sender's message begins with the letter "J";
      The recipient's message begins with the letter "S";*/
    string jname, sname;
    string jplace, splace;
    string jcity, scity;
    string jstate, sstate;
    string jpostalcode, spostalcode;
    double weight;
    double price;
};


#endif // PACKAGE_H_INCLUDED
