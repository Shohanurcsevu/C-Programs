#include<stdio.h>

 int main()
 
 {
 	int i,n,e,a[300];
 	
 	printf("\n\n\t\t Enter Number Of elemments ");
 	scanf("%d",&n);
 	printf("\n\n\t\t Enter elemments  :");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("\n\n\t\t Enter A Elements  To Search :");
	 scanf("%d",&e);
	 
	 i=0;
	 while(i<n  && e!=a[i])
	 {
	 	i++;
	 }
	 if(i<n)
	 {
	 	printf("\n\n\t\t\ TThe %d Is  on the  elemment s ",e);
	 }
	 else
	 {
	 	printf("\n\n\t\t The %d is not on the  elemments  ",e);
	 }
	 return 0;
 }
