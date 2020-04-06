#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n,a=0;

  printf("Enter a number:");
  scanf("%d", &n);

  while (n!=0)
  {
    a=a*10;
    a= a+n%10;
    n = n/10;
  }

  printf("Reverse of the number = %d",a);
  return 0;
}
