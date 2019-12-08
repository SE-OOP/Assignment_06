#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

class Package
{
public;
    Package(const string &, string &,string &,string &,string &,
             double = 0.0, double = 0.0 )
    void setPackageSender();
    void getPackageSender();
    /*Declare the sender massage*/
    void setPackageRecipients();
    void getPackageRecipients();

    void setPackageRecipientsAddress();
    void getPackageRecipientsAddress();

    void setPackageRecipientsCity();
    void getPackageRecipientsCity();

    void setPackageRecipientsState();
    void getPackageRecipientsState();

    void setPackageRecipientsCode();
    void getetPackageRecipientsCode();
    /*Declare the recipients massage*/
    void setPackageWeight();
    double getPackageWeight();

    void setPackageFee();
    double getPackageFee();

    double calculateCost();
private:
    string packageSender;
    /*Declare the sender massage*/
    string packageRecipients;
    string packageRecipientsAddress;
    string packageRecipientsCity;
    string packageRecipientsState;
    string packageRecipientsCode;
    /*Declare the recipients massage*/
    double packageWeight;
    double packageFee;
};

#endif // PACKAGE_H_INCLUDED
