#include<stdio.h>
#include<conio.h>

int main()
{
  int year;
  printf("Enter year to check whether it is leap year or not \n") ;
  scanf("%d",&year) ;

  if((year % 4 == 0 ))
  {
    printf("%d is a leap year \n",year) ;
  }
  else
  {
    printf("%d is not a leap year \n",year) ;
  }

  getch() ;
  return 0 ;
}
