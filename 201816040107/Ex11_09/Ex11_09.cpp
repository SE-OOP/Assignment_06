#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
int main()
{
    Package a("Jone","Andy","910 42th street","New York","New York","99999",9,4);
    OvernightPackage b("Jane","Tony","nan jing street","Shanghai","Zhejiang","10234",10,4,1);
    TwoDayPackage d("Mane","Lang","Beichen street","Milan","Milan Province","12396",5,4,20);
    a.print();
    b.print();
    d.print();


}
