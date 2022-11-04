#include<stdio.h>
#include<conio.h>

int main()
{
  float a,b,c,D;
  printf("Standard form of Quadratic Equation \n ax^2 + bx + c = 0 \n") ;
  printf("Enter value of a, b and c To know nature of roots of your quadratic Equation\n") ;

  scanf("%f %f %f",&a,&b,&c) ;

  if (a != 0 ) // if a == 0 then it will no longer be a quadratic equation
  {
     D = b * b - 4 * a * c ;
     if(D == 0)
     {
       printf("Quadratic Equation %gx^2 + %gx + %g = 0 has \"two Equal and Real Roots\" \n",a,b,c);
     }
     else if(D > 0)
     {
       printf("Quadratic Equation %gx^2 + %gx + %g = 0 has \"two Distinct Real Roots\" \n",a,b,c);
     }
     else
     {
       printf("Quadratic Equation %gx^2 + %gx + %g = 0 has \"two Distict imaginary Roots\" \n",a,b,c);
     }
  }
  else
  {
    printf("a = %d (Coefficent of x^2 ) can't be zero\nEnter a non-zero value of a  \n",a);
  }


  getch();
  return 0;
}
