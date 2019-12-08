#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include <string>
using namespace std;

class Package
{
    //Output some const data
    friend ostream &operator<<(ostream&, const Package &);
private:
    //Data member:sender,Recipient,address,city,State,Postal_code,S_package_w,fee
    string sender;
    string Recipient;
    string address;
    string city;
    string State;
    int Postal_code;
    double S_package_w;
    double fee;
public:
    //Constructor Package
    Package();
    Package(string,string,string,string,string,int, double, double);
    double calculateCost();//Calculate the product of weight and cost per ounce

    //Here are the data members set and get functions
    const string &getSender() const;

    void setSender(const string &sender);

    const string &getRecipient() const;

    void setRecipient(const string &recipient);

    const string &getAddress() const;

    void setAddress(const string &address);

    const string &getCity() const;

    void setCity(const string &city);

    const string &getState() const;

    void setState(const string &state);

    int getPostalCode() const;

    void setPostalCode(int postalCode);

    double getSPackageW() const;

    void setSPackageW(double sPackageW);

    double getFee() const;

    void setFee(double fee);
};


#endif // PACKAGE_H_INCLUDED
