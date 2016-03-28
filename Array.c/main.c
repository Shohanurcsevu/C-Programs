#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],p=0,i;
    printf("Enter The Number Of Player : ");
    scanf("%d",&p);
    printf("\n Enter The score of Players");
    for(i=0;i<p;i++)
    {
        scanf("%d",&a[i]);
        a[i-1]++;
    }
    return 0;
}
