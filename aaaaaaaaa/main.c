#include<stdio.h>

  main()

  {
        int  no , i, fact = 1;

        printf("\n\n\t\tEnter The Number: ");
        scanf("%d",&no);

        for(i=no ;i>=1; i--)
        {
              fact = fact*i;
        }

        printf("\n\n\t\tThe Factor Number Is %d", fact);

        getch ();
  }
