#include<stdio.h>

int main()

{
	int i,n,a[300],e;
	printf("\n\n\t\t Enter Number Of Elements  :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\n\t\t Enter Elemmnts  :");
		scanf("%d",&a[i]);
	}
	printf("\n\n\t\t Enter The Elements To be Searched  :");
	scanf("%d",&e);
	i=0;
	while(i<n && e!=a[i])
	{
		i++;
	}
	if(i<n)
	{
		printf("\n\n\t\t The Number Found at the location of %d",i+1);
	}
	else
	{
		printf("\n\n\t\t The Number Is not Found ");
		
	}
	
	return 0;
}
