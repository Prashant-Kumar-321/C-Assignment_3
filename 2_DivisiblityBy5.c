#include<stdio.h>
#include<conio.h>

int main()
{
  int Dividend;
  printf("******** Divisiblity by 5 ********\n") ;
  printf("Enter a number = ") ;
  scanf("%d",&Dividend) ;

  if(Dividend % 5 == 0)
  {
    printf("%d is Divisible by 5",Dividend) ;
  }
  else
  {
    printf("%d is not Divisible by 5",Dividend) ;
  }

  getch() ;
  return 0;
}

