#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
   int n,da,ta,ns;
  printf("Enter the basic  salary");
  scanf("%d",&n);
  da=(10*n)/100;
  ta=(12*n)/100;
  ns=n+da+ta;
  printf("The net salary is %d",ns);
  return 0;
}
