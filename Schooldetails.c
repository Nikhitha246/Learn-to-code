#include<stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char name[45],school[18],a;
  int class,age,mark;
   strcpy(name,"Nikhitha Anil");
   strcpy(school,"NMHSS");
   class=7;
   a='B';
   age=13;
   mark=46;
   printf("name:%s\n",name);
   printf("age:%d",age);
   printf("class:%d %c \n",class,a);
   printf("school:%s \n",school);
   printf("mark:%d \n",mark);
  return 0;
}
