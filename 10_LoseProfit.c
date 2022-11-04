
// Write a program to calculate Profit and Lose percentage ;

#include<stdio.h>
#include<conio.h>

int main()
{
    float cp, sp, lp, percentage;
    printf("\n\n\n\t\t\t\t\t\tLOSE & PROFIT \n");
    printf("\t\t\t\t\t      ***************** \n\n\n");

    printf("Cost Price of Product = ") ;
    scanf("%f",&cp) ;

    printf("\n") ; // to give an additional space of line

    printf("Selling Price of Product = ") ;
    scanf("%f",&sp) ;

    lp = sp - cp ;

    printf("\n'") ; // to give additional space of line

    /* (lp stands for lost profit ) difference between selling and cost
    to identify whether shopekeeper is bearing Lose or Profit ;
    if it comes negative i.e there is lose of shopekeeper */

   // if else statement

  if (lp>0)
  {
    // profite
    percentage = lp / cp * 100 ; // percentage profit  calculation
    printf("profit = %0.2f %% on product \n",percentage) ;
  }
  else
  {
    // lose
    lp *= -1 ; // to make it positive ;
    percentage = lp / cp * 100 ; // percentage lose calculation
    printf("Lose = %0.2f %% on Product \n",percentage) ;
  }



//    getch() ;
    return 0;
}
