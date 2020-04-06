#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
   int a;
  printf("Enter the number");
  scanf("%d",&a);
  if(a>0)
  printf("%d is positive",a);
  else if(a<0)
  printf("%d is negative",a);
  else
  printf("zero");
  
  return 0;
}
