#include <stdio.h>
 
int main()
{
    char str[50];
    int i, alphabets, digits, special;
    i = alphabets = digits = special = 0;
 
    printf(" Please Enter any String  :  ");
    gets(str);
    
    while (str[i] != '\0')
    {
      if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
      {
        alphabets++;    
     }
      else if (str[i] >= '0' && str[i] <= '9')
      {
        digits++;    
      }    
      else
        special++;
      i++;
  }
    printf(" Number of Alphabets in this String = %d\n", alphabets);  
  printf(" Number of Digits in this String = %d\n", digits);  
  printf("Number of Special Characters in this String = %d\n", special);    
  
    return 0;
}
