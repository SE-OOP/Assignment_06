//
//  Package.hpp
//  Ex11_09
//
//  Created by misonomayubw on 2019/12/8.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef Package_hpp
#define Package_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Package
{
public:
    Package (const string &,const string &, const string &, const string &, const string &, const string &);
    Package (double = 0.0, double = 0.0);
    void setSenderName (const string &);
    void setRecipientProvince (const string &);
    void setRecipientAddress(const string &);
    void setRecipientAddress(const string &);
    void setRecipientAddress(const string &);
    void setRecipientAddress(const string &);
    void setRecipientAddress(const string &);
    void setRecipientName(const string &);
    void setRecipientZip(const string &);
    string getSenderName () const;
    string getRecipientProvince ()const;
    string getRecipientCity ()const;
    string getRecipientAddress ()const;
    string getRecipientName ()const;
    string getRecipientZip()const;
    void setPackageweight(double);
    double getPackageweight ()const;
    void setFee(double);
    double getFee()const;
    double calculateConst()const;
private:
    double packageWeight;
    double fee;
    string senderName;
    string recipientProvince;
    string recipientAddress;
    string recipientCity;
    string recipientName;
    string recipientZip;

};
