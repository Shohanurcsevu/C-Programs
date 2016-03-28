#include<iostream>
using namespace std;

class Base
{
public:
    void Data()
    {
        cout<<"\nBase\n";

    }
};
class Derived:public Base
{
public:
    void Data1()
    {
        cout<<"Derived"<<endl;
    }
};
int main()
{
    Base B;
    Derived D;
    D.Data1();
    B.Data();
    return 0;
}
