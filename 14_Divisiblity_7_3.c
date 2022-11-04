#include<stdio.h>
#include<conio.h>

int main()
{
  int Number ;

  printf("Enter a Number \na = ");
  scanf("%d",&Number) ;

  if(Number % 7 == 0 || Number % 3 == 0)
  {
    printf("Divisible by either 3 or 7 \n\n\n\a") ;
    if(Number % 7 == 0 && Number % 3 == 0)
    {
      printf("Divisible = 7 and 3 \n\a") ;
    }
    else if (Number % 7 == 0)
    {
      printf("Divisible = 7 \n\a") ;
    }
    else if(Number % 3 == 0 )
    {
      printf("Divisible = 3 \n\a") ;
    }
  }
  else
  {
    printf("Neither Divisible by 7 nor 3 \n\a") ;
  }

  getch() ;
  return 0;
}
