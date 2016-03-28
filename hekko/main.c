#include<stdio.h>

 int main()
 {
       int x,y,sum,subs,multi,div;

       printf("\n\n\t\tPlease enter The Number Here : ");
       scanf("%d",&x);

       printf("\n\n\t\tPlease Enter The Number Here : ");
       scanf("%d",&y);

       sum=x+y;
       subs=x-y;
       multi=x*y;
       div=x/y;

       printf("\n\n\t\tThe Sum Of %d+%d is : %d \n\n",x,y,sum);
       printf("\n\n\t\tThe  Subtract of %d-%d is : %d \n\n",x,y,subs);
       printf("\n\t\tThe multiple of %d*%d is :  %d\n\n",x,y,multi);
       printf("\n\n\t\tThe Diver of %d/%d is :  %d\n\n",x,y,div);

       return 0;
 }
