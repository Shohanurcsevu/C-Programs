#include<stdio.h>
 int main()
 {
     int x,y;
     printf("\n\t\t\t Enter The Co-ordinates (x,y) : ");
     scanf("%d %d",&x,&y);
     if(x>=0&&y>=0)
        printf("\n\n\t\t First Quadrant");
     else if(x>=0&&y<=0)
        printf("\n\n\t\t Second Quadrant");
     else if(x<=0&&y<=0)
        printf("\n\n\t\t Third Quadrant");
     else if(x<=0&&y>=0)
        printf("\n\n\t\t Fourth  Quadrant");


     return 0;
 }
