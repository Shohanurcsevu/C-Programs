#include <iostream>

using namespace std;

int main()
{
   int  a[200],i,n,p,t;
   cout<<"Enter The Number Of Elements :"<<endl;
   cin>>n;
   cout<<"Enter The Elements  : "<<endl;
   for(i=0;i<n;i++)
   {

       cin>>a[i];
   }
   cout<<"Enter The Position You Want To Delete : "<<endl;
   cin>>p;

    t=p;
    while(t<n)
    {
        a[t-1]=a[t];
        t=t+1;
    }

    n=n-1;

    cout<<"Enter The Result Array  : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Array ["<<i<<"]"<<"="<<a[i]<<endl;
    }
    return 0;
}
