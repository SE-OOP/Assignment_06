#include<iostream>
using namespace std;

class Package
{
public:
    Package(const string &,const string &,const string &,const string &,const string &,
            const string &,const string &,const string &,const string &,const string &,
            double , double );
    void setSenderName(const string &);
    string getSenderName() const;
    void setSenderAddress(const string &);
    string getSenderAddress()const;
    void setSenderCity(const string &);
    string getSenderCity()const;
    void setSenderState(const string &);
    string getSenderState()const;
    void setSenderZipCode(const string &);
    string getSenderZipCode()const;
    void setRecipientName(const string &);
    string getRecipientName()const;
    void setRecipientAddress(const string &);
    string getRecipientAddress()const;
    void setRecipientCity(const string &);
    string getRecipientCity()const;
    void setRecipientState(const string &);
    string getRecipientState()const;
    void setRecipientZipCode(const string &);
    string getRecipientZipCode() const;
    void setWeight(double );
    double getWeight()const;
    void setPrice(double);
    double getPrice()const;
    double calculateCost(double, double);
private:
    string senderName;
    string senderAddress;
    string senderCity;
    string senderState;
    string senderZipCode;
    string recipientName;
    string recipientAddress;
    string recipientCity;
    string recipientState;
    string recipientZipCode;
    double weight;
    double price;
};
