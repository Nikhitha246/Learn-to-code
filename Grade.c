#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int mark;
  printf("Enter the mark");
  scanf("%d",&mark);
  if(mark>=90)
  printf("Grade A ");
  if(mark>=80)
  printf("Grade B");
  if(mark>=70)
  printf("Grade C");
  if(mark>=60)
  printf("Grade D");
  else
  printf("Fail");
}
