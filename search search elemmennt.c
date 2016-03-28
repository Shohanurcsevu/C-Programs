#include<stdio.h>

 int main()
 {
 	int a[100],i,n,e;
 	printf("\n\n\t\t\t  Enter Number Of Elements :");
 	scanf("%d",&n);
 	printf("Enter Elements  :");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d \n",&a[i]);
	 }
	 printf("\n\n\t\t Enter a element to search :");
	 scanf("%d",&e);
	 
	 i=0;
	 while(i<n && e!=a[i]);
	 {
	 	i++;
	 }
	 
	 if(i<n)
	 {
	 	printf("\n\n\t\t The Elements Is In The  Source ");
	 	
	 }
	 else
	 {
	 	printf("\n\n\t\t  The Element  is Not inn the  Source");
	 }
	 return 0;
	 
 }
