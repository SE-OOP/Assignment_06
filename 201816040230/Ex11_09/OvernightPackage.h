#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
class OvernightPackage:public Package
{
public:
    OvernightPackage(double,string,string,string,string,string,string,string,string,string,string,double,double);
    double calculateCost();
    void print();
private:
    double extracost;//每盎司额外费用
};
#endif // OVERNIGHTPACKAGE_H
