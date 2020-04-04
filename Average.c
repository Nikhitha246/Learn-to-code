#include <stdio.h>

//Compiler version gcc  6.3.0
/*a and b are marks of the student */
  /*Average of those marks are stored in avg*/
int main()
{
  int name[20];
  float a,b,avg;   
  printf("Enter the name of the student: \n");
  scanf("%s",name);
  printf("enter the marks of the student: \n");
  scanf("%f%f",&a,&b);
  avg=(a+b)/2;
  printf("The average of the marks obtained by this student is %f",avg);
  return 0;
}
