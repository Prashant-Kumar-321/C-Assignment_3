
#include<stdio.h>
#include<conio.h>

int main ()
{
    int Hin, Eng, Math, Sci, SocSci,total;
    float percentage ;

    printf("\t\t\t\t\t      *************************\n") ;
    printf("\t\t\t\t\t\t Marksheet Generator  \n") ;
    printf("\t\t\t\t\t      *************************\n\n\n") ;

    printf(" Enter marks of your subjects \n") ;
    // Taking marks of subjects one by one form user
    printf(" Hindi = ") ;
    scanf("%d",&Hin);

    printf(" English = ") ;
    scanf("%d",&Eng) ;

    printf(" Math = ") ;
    scanf("%d",&Math) ;

    printf(" Science = ") ;
    scanf("%d",&Sci) ;

    printf(" Social Science = ") ;
    scanf("%d",&SocSci) ;

    total = Hin + Eng + Math + Sci + SocSci ;
    printf("\n Totla = %d\n\n\n",total) ;

    percentage = total / 500.0 *100 ; // expression to calculate percentage
    // instructions for pass and failed

    if (Hin >= 33 && Eng >= 33 && Math >= 33 && Sci >= 33 && SocSci >= 33 )  // passing condition ;
    {
        // message
        printf("Congratulation!!!!!!!\nYou have cleared Exam \n") ;
        printf("You are promoted to next class \n");

        if(percentage >=33 && percentage <=45)
        {
            printf("Division = 3rd\n") ;
        }
        else if(percentage > 45 && percentage <60)
        {
            printf("Division = 2nd\n") ;
        }
        else
        {
            printf("Division = 1st\n") ;
        }
        printf("Result = %0.1f %% \n",percentage) ;


    }
    else
    {
        printf("sorry!!!!\n");
        printf("you failed !!  \nTry Next Time With better preparation \n") ;
        printf("Result = %0.3f %% \n",percentage) ;
    }

    return 0;
}








