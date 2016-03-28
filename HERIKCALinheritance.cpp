#include<iostream>
using namespace std;

class radius
{
private:

public:
    int r;
    void getdata()
    {
        cout<<"\n\n\t\t Enter Radius " ;
        cin>>r;

    }
};
class squre: public radius
{
public:
    void getdata()
    {
        radius::getdata();
    }
    void cal()
    {
        int q;
        q=(r*r);
        cout<<" The Result Of Square is = " <<q;
    }
};
int main()
{
    squre A;
    A.getdata();
    A.cal();

}
