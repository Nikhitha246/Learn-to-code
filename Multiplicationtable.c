#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i,j,n;
  printf("Enter the number");
  scanf("%d",&n);
  
  {
    for(j=1;j<=10;j++)
    {
      printf("%d*%d=%d\n",j,n,n*j);
    }
  }
  return 0;
}
