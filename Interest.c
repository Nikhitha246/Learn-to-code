#include <stdio.h>

//Compiler version gcc  6.3.0
/* p is the principal amount*/
  /*r is the interest rate*/
    /*t is the time period*/
     /*i is the simple interest*/
int main()
{
  float p,r,t,i;
  printf("Enter the amount, interest rate,time period ");
  scanf("%f%f%f",&p,&r,&t);
  i=(p*r*t)/100;
  printf("interest is %f",i);
  return 0;
}
