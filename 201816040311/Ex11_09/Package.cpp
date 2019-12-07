#include "Package.h"
#include <iostream>

using namespace std;

//Here are the data members set and get functions
const string &Package::getSender() const {
    return sender;
}

void Package::setSender(const string &sender) {
    Package::sender = sender;
}

const string &Package::getRecipient() const {
    return Recipient;
}

void Package::setRecipient(const string &recipient) {
    Recipient = recipient;
}

const string &Package::getAddress() const {
    return address;
}

void Package::setAddress(const string &address) {
    Package::address = address;
}

const string &Package::getCity() const {
    return city;
}

void Package::setCity(const string &city) {
    Package::city = city;
}

const string &Package::getState() const {
    return State;
}

void Package::setState(const string &state) {
    State = state;
}

int Package::getPostalCode() const {
    return Postal_code;
}

void Package::setPostalCode(int postalCode) {
    Postal_code = postalCode;
}

double Package::getSPackageW() const {
    return S_package_w;
}

void Package::setSPackageW(double sPackageW) {
    if(sPackageW>0)
    {
        S_package_w = sPackageW;
    }
    else
    {
        cout <<"Illegal input:Please enter a positive number!" << endl;
    }
}

double Package::getFee() const {
    return fee;
}

void Package::setFee(double fee) {
    if(fee>0)
    {
        Package::fee = fee;
    }
    else
    {
        cout <<"Illegal input:Please enter a positive number!" << endl;
    }

}

//Initialization constructor
Package::Package(string a, string b, string c, string d, string e, int f, double g, double h) {
    setSender(a);
    setRecipient(b);
    setAddress(c);
    setCity(d);
    setState(e);
    setPostalCode(f);
    setSPackageW(g);
    setFee(h);
}
//Calculate the product of weight and cost per ounce
double Package::calculateCost() {
    return fee*S_package_w;
}

Package::Package() {

}

ostream& operator<<(ostream &output, const Package &right)
{
    output <<"Sender:"<< right.getSender()<<endl;
    output <<"Recipient:"<< right.getRecipient()<<endl;
    output <<"Address:"<< right.getAddress()<<endl;
    output <<"City:"<< right.getCity()<<endl;
    output <<"State:"<< right.getState()<<endl;
    output <<"Postal_code:"<< right.getPostalCode()<<endl;
    output <<"SPackage_Weight:"<< right.getSPackageW()<<" OZ"<<endl;
    output <<"Fee:"<< right.getFee()<<" OZ/$"<<endl;

    return output;
}