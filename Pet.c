#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int age;
  char name[10],food[10];
  
  strcpy(name,"chippy");
  age=3;
  strcpy(food,"chicken");
  printf("Petname:%s\n",name);
  printf("age:%d\n",age);
  printf("favfood:%s\n",food);
  
  return 0;
}
