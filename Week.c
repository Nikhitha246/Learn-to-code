#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int day=7;
  printf("Enter the number");
  scanf("%d",&day);
  switch (day)
  {
    case 1:
      if(day==1)
      printf("monday");
      break;
      case 2:
      if(day==2)
      printf("Tuesday");
      break;
      
      case 3:
      if(day==1)
      printf("Wednesday");
      break;
      
  case 4:
      if(day==4)
      printf("Thursday");
      break;
      case 5:
      if(day==1)
      printf("Friday");
      break;
      case 6:
      if(day==6)
      printf("Saturday");
      break;
      case 7:
      if(day==7)
      printf("sunday");
      break;
      }
  return 0;
}
