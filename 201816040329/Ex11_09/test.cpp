#include <iostream>
#include <stdexcept>
#include"package.h"
#include"twodaypackage.h"
#include"overnightpackage.h"

using namespace std;

int main()
{
    package packagek("kenny", "tina", "swiss_haha",
"haha", "swiss", "11111", 56,3 );
  twodaypackage packagen("kenny", "tina", "swiss_haha",
"haha", "swiss", "11111", 56,3,5);
  overnightpackage packagev("kenny", "tina", "swiss_haha",
"haha", "swiss", "11111", 56,3 );

cout << "\nThe calculate cost is " << packagek.calculatecost()
         << "\n\n" << endl;
cout << "\nThe calculate cost is " << packagen.calculatecost()
         << "\n\n" << endl;
 cout << "\nThe calculate cost is " << packagev.calculatecost()
         << "\n\n" << endl;
}
