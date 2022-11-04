//WAP to check whether the given character is alphabet(lower upper || upper case ) or digit or special character ;

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ;

    printf("Enter a character \n");
    scanf("%c",&ch) ; // Ascii code of character will be stored in ch variable ;

    if (ch >= 65 && ch <= 90)
    {
        printf("Alphabet ----> (Upper Case) \n") ;
    }
    else if(ch >= 97 && ch <= 122 )
    {
        printf("Alphabet ----> (Lower Case) \n") ;
    }
    else if(ch >= 48 && ch <= 56 )
    {
        printf("Digit [0-9] \n");
    }
    else
    {
        printf("Special character \n");`
    }
    printf("\a");
    getch();
    return 0;
}
