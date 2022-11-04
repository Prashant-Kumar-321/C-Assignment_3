#include<stdio.h>
#include<conio.h>

int main()
{
  int num ; // store User input number

  printf("Enter a Number \n") ;
  scanf("%d",&num) ;

  if(num % 2 == 0 && num % 3 == 0)
  {
    printf("%d is Divisible by both 2 and 3 \n",num);
  }
  else
  {
    // either num is not divisible by 2 or 3 or both
    if(num % 2 == 0)
    {
     printf("%d is Divisible by only 2\n",num) ;
    }
    else if(num % 3 == 0)
    {
      printf("%d is Divisible by only 3\n",num) ;
    }
    else
    {
     printf("%d is neither divisible by 2 nor 3 \n",num) ;
    }
  }

  getch() ;
  return 0;
}
