#include<stdio.h>

 void menu(void)
 {

       char ch;
       printf("\n\n\t\t1: Check Spelling ");
       printf("\n\n\t\t2: Correct Spelling ");
       printf("\n\n\t\t3: Display Spelling Errors ");
       printf("\n\n\t\t4: Strike Any Other Key To Skip");
       printf("\n\n\t\t**********Enter Your Choice********* ");

       ch =getchar ();

       switch(ch){
 case '1' :
      check_spelling();
      break;
      }
 }
