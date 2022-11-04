#include<stdio.h>
#include<conio.h>

int main()
{
    int N= 9876,digit_Counts = 0;
    printf("Enter a three digit number\n");
    scanf("%d",&N);

    // Counting Digit Number ;
    if(N<0) // For negative number ;
    {
        N *= -1 ;
        //program of Counting digits of Number ;
        while ( N > 0)
        {
            N /= 10 ; // removing unit digit in each execution
            digit_Counts++ ;
        }
    }
    else  // For positive Number
    {
        //program of Counting digits of Number ;
        while ( N > 0)
        {
            N /= 10 ; // removing unit digit in each execution
            digit_Counts++ ;
        }
    }
    // Program to check whether the given number is three digit number or not
    if(digit_Counts == 3)
    {
        printf("You have entered three digit number \n") ;
    }
    else
    {
        printf("this is %d digit Number \nEnter Three Digit Number\n",digit_Counts) ;
    }


    getch() ;
    return 0 ;
}
