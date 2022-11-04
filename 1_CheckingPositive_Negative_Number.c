#include<stdio.h>
#include<conio.h>

int main()
{
  float num;
  printf("Enter your lucky number\n") ;
  scanf("%f",&num) ;

  if (num >= 0)
  {
    printf("%g(your lucky ) is Positive Number\n",num);
  }
  else
  {
    printf("%g(your lucky ) is Negative \n",num) ;
  }

  getch();
  return 0;
}
