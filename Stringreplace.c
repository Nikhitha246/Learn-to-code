#include <stdio.h>
#include <string.h>

int main() {
   char s[20];
   int i;
   printf("\nEnter a string : ");
   gets(s);
   
   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] - 32;
      }
else if(s[i] >= 'A' && s[i] <= 'Z') {
         s[i] = s[i] + 32;
      }
   }
   printf(" %s", s);
   return 0;
}
