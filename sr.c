#include<stdio.h>

 int main()

 {
     char a[100];
     int i;
     printf("\n Enter Your Name Here : ");
     scanf("%s",&a);
     for(i=0;a[i]!='\0';i++);
     printf("%s",a);
     return 0;
 }
