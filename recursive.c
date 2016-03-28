#include<stdio.h>

 int fact(int);

 int main()
 {
     system("COLOR 34");
     int n,ans;
     printf("\nEnter A Number Here :");
     scanf("%d",&n);
     ans=fact(n);
     printf("\nThe  Factorial is : %d",ans);
 }
 int fact(int x)
 {
     int f;
     if(x==0)
     {
         return 1;
     }
     else
     {
         x=x*fact(x-1);
         return f;
     }
 }
