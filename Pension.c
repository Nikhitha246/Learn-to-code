#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int age;
  printf("Enter the age: ");
  scanf("%d",&age);
  if(age>=60)
  printf("The amount is 10,000");
 else if(age>=50)
  printf("The amount is 5000");
  else
  printf("There is no pension");
  return 0;
}
