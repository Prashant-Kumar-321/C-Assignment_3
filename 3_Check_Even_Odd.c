#include<stdio.h>
#include<conio.h>

int main()
{
  int num ;

  printf("\t\t\t\t\t\t####**** Even Odd Teller ****#### ") ;
  printf("\t\t\t\t\t\t\t\t\t...........................................................\n\n\n") ;

  printf("Enter a number \n\n") ;
  scanf("%d",&num) ;

  if(num%2 == 0)
  {
    printf("%d is Even \n",num) ;
  }
  else
  {
    printf("%d is Odd \n",num) ;
  }

  getch() ;
  return 0;

}
