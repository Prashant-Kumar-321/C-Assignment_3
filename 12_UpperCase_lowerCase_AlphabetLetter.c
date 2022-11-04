#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 'A' ;
    printf("Enter a letter of English Alphabet \n") ;
    scanf("%c",&ch) ;

    if (ch >= 65 && ch <= 90)
    {
        printf("%c ---> Upper case of English Alphabet \n",ch);
    }
    else if(ch >= 97 && ch <= 122)
    {
        printf("%c ---> Lower case of English Alphabet \n", ch);
    }
    else
    {
        printf("Invalid letter \n");
    }

    getch() ;
    return 0;
}
