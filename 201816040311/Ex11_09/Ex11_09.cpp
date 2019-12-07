#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <iostream>

using namespace std;

int main(){
    Package vv("liu","wang","HAUT","Henan","zhongyuan",45000,200,1);
    TwoDayPackage aa("liu","wang","HAUT","Henan","zhongyuan",45000,200,1,20);
    OvernightPackage bb("liu","wang","HAUT","Henan","zhongyuan",45000,200,1,1);

    cout<<vv<<endl;
    cout<<"Package calculatecost:"<<vv.calculateCost()<<endl;
    cout<<endl;

    cout<<"TwoDayPackage Flat shipping fee:"<<aa.getFsfee()<<endl;
    cout<<"TwoDayPackage calculatecost:"<<aa.calculateCost()<<endl;
    cout<<endl;

    cout<<"OvernightPackage add fee:"<<bb.getAddfee()<<endl;
    cout<<"OvernightPackage calculatecost:"<<bb.calculateCost();


    return 0;

}
