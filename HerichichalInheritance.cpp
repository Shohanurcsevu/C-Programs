#include<iostream>
#include<stdlib.h>
using namespace std;

class Base
{
public:
    int a;
    void getnumber()
    {
        cout<<"\n\n\t\tEnter THe Value A : ";
        cin>>a;
    }
};
class Derived1:public Base
{
public:
    void squre()
    {
        getnumber();
        cout<<"\n\n\t\tThe Result Of Square : "<<a*a;
    }
};
class Derived2:public Base
{
public:
    void cube()
    {
        getnumber();
        cout<<"\n\n\t\tThe Result Of Cube : "<<a*a*a;
    }
};

int main()
{
    Derived1 A;
    A.squre();
    Derived2 B;
    B.cube();
    return 0;
}
