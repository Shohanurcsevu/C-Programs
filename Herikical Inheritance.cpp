#include<iostream>
using namespace std;

class person
{
    char name[20],gender[10];
    int age;
public:
    void getdata()
    {


    cout<<"\n\t\t\tEnter Name : ";
    cin>>name;
    cout<<"\n\t\t\tEnter Age : ";
    cin>>age;
    cout<<"\n\t\t\tEnter Gender : ";
    cin>>gender;

    }
    void display()
    {
        cout<<"\n\t\t\t Name : "<<name<<endl;
        cout<<"\n\t\t\t Age  : "<<age<<endl;
        cout<<"\n\t\t\t Gender : "<<gender<<endl;
    }
};
class student:public person
{
    char institute[20],department[20];
public:

    void getdata()
    {
        person::getdata();
        cout<<"\n\t\t\tEnter The Name Of Your Institute ";
        cin>>institute;
        cout<<"\n\t\t\tEnter Your Department ";
        cin>>department;
    }
    void display()
    {
        person::display();
        cout<<"\n\t\t\t Institute : "<<institute<<endl;
        cout<<"\n\t\t\t  Department : "<<department<<endl;
    }
};
 int main()
 {
     student A;
     A.getdata();
     A.display();
     return 0;
 }
