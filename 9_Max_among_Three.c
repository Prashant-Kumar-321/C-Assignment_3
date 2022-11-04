#include<stdio.h>
#include<conio.h>

int main()
{
    float a,b,c;
    printf("Enter three numbers \na,b,c = ");
    scanf("%f %f %f",&a,&b,&c) ;

    if (a == b)
    {
        if(a>c)
        {
            printf("Greatest number is %g",a) ;
        }
        else
        {
            printf("Greatest Number is %g",c) ;
        }
    }
    else if(a == c)
    {
        if (a>b)
        {
            printf("Greatest Number is %g",a) ;
        }
        else
        {
            printf("Greatest Number is %g",b);
        }
    }
    else if(b == c)
    {
        if(b > a)
        {
            printf("Greatest Number is %g",b) ;
        }
        else
        {
            printf("Greatest Number is %g",a) ;
        }

    }
    else if ( a == b == c)
    {
        printf ("All are same numbers \nGreatest Number is %g ",a) ;
    }
    else
    {
        if(a>b)
        {
            if(a>c)
            {
                printf("Greatest Number is %g",a) ;
            }
            else
            {
                printf("Greatest Number is %g",c) ;
            }
        }
        else
        {
            if(b>c)
            {
                printf("Greatest Number is %g",b) ;
            }
            else
            {
                printf("Greatest Number is %g",c) ;
            }
        }

    }

    getch() ;
    return 0;
}
