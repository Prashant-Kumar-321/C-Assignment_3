// WAP to check whether the number is positive , negative or zero ;
#include<stdio.h>
#include<conio.h>

int main()
{

// int main() {}
    float N ;
    printf("Enter a Number \n");
    scanf("%f",&N);

    if(N == 0)
    {
      printf("zero\n");
    }
    else
    {
      if(N > 0)
      {
        printf("Positive\n");
      }
      else
      {
        printf("Negative \n");
      }
    }
    printf("\a") ;

    getch() ;
    return 0;
}
