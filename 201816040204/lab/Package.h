#include <iostream>

using namespace std;

class Package
{
public:
    Package (const string &,const string &, const string &, const string &, const string &, const string &,
              double = 0.0, double = 0.0);
    void setSenderName (const string &);
    string getSenderName () const;

    void setRecipientProvince (const string &);
    string getRecipientProvince ()const;
    void setRecipientCity(const string &);
    string getRecipientCity ()const;
    void setRecipientAddress(const string &);
    string getRecipientAddress ()const;
    void setRecipientName(const string &);
    string getRecipientName ()const;
    void setRecipientZip(const string &);
    string getRecipientZip()const;
    void setPackageweight(double);
    double getPackageweight ()const;
    void setFee(double);
    double getFee()const;
    double calculateConst()const;
private:
    string senderName;
    string recipientProvince;
    string recipientAddress;
    string recipientCity;
    string recipientName;
    string recipientZip;
    double packageWeight;
    double fee;
};
