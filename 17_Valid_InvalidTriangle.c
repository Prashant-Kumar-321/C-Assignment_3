#include<stdio.h>
#include<conio.h>

int main()
{
  float a,b,c ;

  printf("Enter sides of a Triangle \na,b,c = ");
  scanf("%f %f %f",&a,&b,&c) ;

  if(a+b > c)
  {
    printf("Valid Triangle\nTriangle Can be constructed of above sides \n");
  }
  else
  {
    printf("Invalid Triangle \nTriangle can't be constructed of above sides \n") ;
  }

  getch();
  return 0;
}
