#include <stdio.h>
int main()
{
  int num,r=0;
 
  printf("Enter a number: \n");
  scanf("%d",&num);
  r=prime(num);
  if(r==0)
    printf("%d is a prime number \n",num);
  else
    printf("%d is not a prime number \n",num);
  getch();
}
int prime(int n)
{
  int i;
  for(i=2;i<=n/2;i++)
  {
    if(n%i!=0)
      continue;
    else
      return 1;
  }
  return 0;
}
