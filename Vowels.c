#include <stdio.h>

int main()
{
int v=0,i;
char str[50],ch;
printf("enter the string:");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
ch=str[i];
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
 v++;
 }
printf("%d",v);
return 0;
}
