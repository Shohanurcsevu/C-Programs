#include <iostream>

using namespace std;

int main()
{
   int a[200],n,i,p,v,t;

   cout<<"Enter The  Number Of Elements : "<<endl;
   cin>>n;
   cout<<"Enter The Elements : "<<endl;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   cout<<"Enter The Position You Want To Insert :"<<endl;
   cin>>p;
   cout<<"Enter The  Value You Want To Insert : "<<endl;
   cin>>v;

   n=n+1;
   t=n;
   while(t>=p)
   {
       a[t+1]=a[t];
       t=t-1;
   }

   a[p]=v;

   cout<<"The Result Array : "<<endl;


   for(i=0;i<n;i++)
   {
       cout<<"Array ["<<i<<"]"<<"= " <<a[i]<<endl;
   }

   return 0;
}
