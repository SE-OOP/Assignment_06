#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include<string.h>
using namespace std;

class Package
{
    public:
        Package(const string &,const string &,const string &,const string &,const string &,const string &, double,double);
        void setSenderName(const string &);
        string getSenderName()const;
        void setRecipientName(const string &);
        string getRecipientName()const;
        void setAddress(const string &);
        string getAddress()const;
        void setCity(const string &);
        string getCity()const;
        void setState(const string &);
        string getState()const;
        void setPostalcode(const string &);
        string getPostalcode()const;
        void setWeight(double );
        double getWeight()const;
        void setOneshot(double );
        double getOneshot()const;
        double calculateCost();
    private:
        string sendername;
        string recipientname;
        string address;
        string city;
        string state;
        string postalcode;
        double oneshot;
        double weight;

};

#endif // PACKAGE_H_INCLUDED
