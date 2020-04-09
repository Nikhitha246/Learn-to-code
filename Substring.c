#include<stdio.h>
   int main()
{
   char str[30], sub[30];
   int position, length, c = 0;
 
   printf("Input a string");
   gets(str);
 
   printf("Enter the position and length of substring");
   scanf("%d%d", &position, &length);
 
   while (c < length) {
      sub[c] = str[position+c-1];
      c++;
   }
   sub[c] = '\0';
 
   printf("Required substring is \"%s\"\n", sub); 
 
   return 0;
}
