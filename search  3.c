#include <stdio.h>
#include <stdlib.h>

  int main()
  
  {
  	int i,n,a[100],e;
  	printf("\n\n\t\t Enter The  Number Of Elements :");
  	scanf("%d",&n);
  	printf("Enter Elements:  \n");
  	for(i=0;i<n;i++)
  	{
  		scanf("%d",&a[i]);
	  }
	  printf("\n\n\t\t Enter A Element To search  Here : ");
	  scanf("%d",&e);
	  i=0;
	  while(i<n && e!=a[i])
	  {
	  	i++;
	  }
	  if(i<n)
	  {
	  	printf("\n\n\t\t The  Elemments Is  In The  Array");
	  }
	  else
	  {
	  	printf("\n\n\t\t The  Elemments Is Not   In The  Array");
	  }
	  return 0;
  }
