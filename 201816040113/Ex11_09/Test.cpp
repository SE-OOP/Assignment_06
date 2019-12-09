#include <iostream>
#include <stdexcept>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
using namespace std;

int main()
{
    cout<<"For Package:"<<endl;
    for(int i=0;i<50;i++)
        cout<<"*";
    cout<<endl;
    Package P1("Anna","first street","Montgomery","Alabama","36800","Bob","second street","Honolulu","Hawaii","999203",1.0,5.0);
    P1.print();
    cout<<"The Total Cost is: $"<<P1.calculateCost()<<endl;
    for(int i=0;i<50;i++)
        cout<<"*";
    cout<<endl<<endl<<endl<<endl;


    cout<<"For OvernightPackage:"<<endl;
    for(int i=0;i<50;i++)
        cout<<"*";
    cout<<endl;
    OvernightPackage P2("Cici","third street","Miami","Florida","420048","David","fourth street","Sacramento","California","95899",2.0,6.0,1.0);
    P2.print();
    for(int i=0;i<50;i++)
        cout<<"*";
    cout<<endl<<endl<<endl<<endl;


    cout<<"For TwoDayPackage:"<<endl;
    for(int i=0;i<50;i++)
        cout<<"*";
    cout<<endl;
    TwoDayPackage P3("Elly","fifth street","Austin","Texas","422648","Frank","sixth street","Spring field","Illinois","32673",3.0,2.5,0.6);
    P3.print();
    for(int i=0;i<50;i++)
        cout<<"*";
    cout<<endl<<endl<<endl<<endl;
}
