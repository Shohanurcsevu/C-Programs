#include<iostream>
using namespace std;
class person
{
private:
    char name[100],gender[20];
    int age;
public:
    void getdata()
    {
        cout<<"\n\t\t Enter Name : ";
        cin>>name;
        cout<<"\n\t\t Enter Age : ";
        cin>>age;
        cout<<"\n\t\t Enter Gender : ";
        cin>>gender;

    }
    void display()
    {
        cout<<"\n\n\t\t Name : "<<name;
         cout<<"\n\n\t\t  Age : "<<age;
          cout<<"\n\n\t\t  Gender : "<<gender;

    }
};
class student : public person
{
    char institute[20],department[20];
    float cgpa;
public:
    void getdata()
    {
        person::getdata();

     cout<<"\n\n\t\t Enter Institute :";
     cin>>institute;
      cout<<"\n\n\t\t Enter Department : ";
      cin>>department;
       cout<<"\n\n\t\t Enter CGPA ";
       cin>>cgpa;
    }
    void display()
    {
        person::display();
         cout<<"\n\n\t\t Institute :"<<institute;
          cout<<"\n\n\t\t Department :"<<department;
           cout<<"\n\n\t\t  CGPA :"<<cgpa;
    }
};
int main()
{
    person A;
     cout<<"\n\n\t\t Enter Data For A Person ";
    A.getdata();
    A.display();
     cout<<"\n\n\t\t  Enter Data For  A Student ";
     student S;
     S.getdata();
     S.display();
    return 0 ;
}
