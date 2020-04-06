#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ 
  int a,b,c;
  printf("Enter the numbers");
  scanf("%d%d%d",&a,&b,&c);
  if((a>b)&(c<b))
  printf("%dis the greatest",a);
  if((b>a)&(a>c))
  printf("%d is the biggest",b);
  else
  printf("%d is the biggest",c);
  return 0;
  
}
