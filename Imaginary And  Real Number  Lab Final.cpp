#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    void getdata()
    {
        cout<<"Enter Real Part :";
        cin>>real;
        cout<<"Enter Imaginary Part : ";
        cin>>img;
    }
    Complex operator+(Complex T)
    {
        Complex S;
       S.real=this->real+T.real;
       S.img=this->img+T.img;
       return S;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i";
    }
};

int main()
{
    Complex obj1,obj2,obj3;
    obj1.getdata();
    obj2.getdata();
    obj3=obj1+obj2;

    obj3.display();
}
