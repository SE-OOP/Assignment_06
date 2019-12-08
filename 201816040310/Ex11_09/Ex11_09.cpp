#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
using namespace std;

int main(){
	OvernightPackage po("taofu","St.LianHua","Zhengzhou","HeNan","05050",2,10,4); // creat a new Overnightpackage
	po.print(); // display po infomation
	
	cout<<endl;
	
	TwoDayPackage pt("taofu","St.LianHua","Zhengzhou","HeNan","05050",2,10,4);// creat a new TwoDayPackage
	pt.print(); //display pt infomation
	return 0;
}