#include<stdio.h>
 
  int main()
  
  {
  	int a[300],i,n,e;
  	printf("\n\n\t\t Enter The Number Of  Elements :");
  	scanf("%d",&n);
  	printf("Enter Elements :\n");
  	for(i=0;i<n;i++)
  	{
  		scanf("\n%d",&a[i]);
	  }
	  printf("\n\n\t\t  Enter A  Elements To Search  :");
	  scanf("%d",&e);
	  
	  i=0;
	  while(i<n &&  e!=a[i])
	  {
	  	i++;
	  }
	  
	  if(i<n)
	  {
	  	printf("\n\n\t\t The Number Is in The elements");
	  }
	  else
	  {
	  	printf("\n\n\t\t The Number Is  not on the elements  ");
	  }
	  return 0;
  }


