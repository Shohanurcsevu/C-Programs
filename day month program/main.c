#include<stdio.h>

 int main()
 {
       int days,months;
       printf("\n\n\t\t\tEnter Days Here : ");
       scanf("%d",&days);

       months=days/30;
       days = days%30;

       printf("\n\n\t\t\tMonths =%d Days  = %d",months,days);

       return 0;
 }
