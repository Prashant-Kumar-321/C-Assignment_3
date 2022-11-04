// WAP which takes the month number as input and display number of days in that month ;
#include<stdio.h>
#include<conio.h>

int main()
{
    int mn ;

    printf("Enter Month Number (jan. = 1 , feb. = 2 ... ) \n");
    scanf("%d",&mn);

    printf("\n");

    if(mn == 1 || mn == 3 || mn == 5 || mn == 7 || mn == 8 || mn == 10 || mn ==  12)
    {
      // Month with 31 days jan, march, may ,july, august,october , december ;

        if(mn == 1 )
        {
            printf("Month : January \n");
        }
        else if(mn == 3 )
        {
            printf("Month : March \n");
        }
        else if(mn == 5 )
        {
            printf("Month : May \n");
        }
        else if(mn == 7 )
        {
            printf("Month : July \n");
        }
        if(mn == 8 )
        {
            printf("Month : August \n");
        }
        else if(mn == 10 )
        {
            printf("Month : October \n");
        }
        else
        {
          printf("Month : December \n");
        }

        printf("Days   : 31 \n");
    }

    else if (mn == 2)
    {
      // Febuary
        printf("Month : Febuary \n");
        printf("Days  : 28 / 29 \n") ;
    }

    else if (mn > 12 || mn < 0 )
    {
      // Invalid month no
        printf("Invalid month\n");
    }
    else
    {
      // 30 days months April, June, September , November
      if (mn == 4)
      {
        printf("Month : April \n");
      }
      else if(mn == 6)
      {
        printf("Month : June \n");
      }
      else if(mn == 9)
      {
        printf("Month : September \n");
      }
      else if(mn == 11)
      {
        printf("Month : November  \n");
      }


        printf("Days  : 30 \n");
    }


    getch();
    return 0;
}
