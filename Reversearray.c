#include <stdio.h>



int main()
{
  {
char str[20],ch;
int i=0;
printf("enter the word");
while (ch!='\n')
{
  scanf("%c",&ch);
str[i]=ch;
i++;
}
str[i]='\0';
i=i-1;
while(i>=0)
{printf("%c",str[i]);
--i;}
}
return 0;
}
