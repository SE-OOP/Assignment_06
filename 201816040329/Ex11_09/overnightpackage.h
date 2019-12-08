#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED



#endif // OVERNIGHTPACKAGE_H_INCLUDED
#include"package.h"
using namespace std;

class overnightpackage:public package
{
public:
 overnightpackage(string &,string &,string &,string &,string &,int,double=0.0,double=0.0,double=0.0);

    void settip(double);
    double gettip();
    double calculatecost();
private:
    double tip;
};
