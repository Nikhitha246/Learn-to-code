#include<stdio.h>

int main()
{
 int i, j, m, n, a[30][30], b[30][30];
  
 printf("\nPlease Enter Number of rows and columns\n");
 scanf("%d %d", &i, &j);
 
 printf(" Please Enter the  Elements \n");
 for(m = 0; m< i; m++)
  {
   for(n = 0;n < j; n++)
    {
      scanf("%d", &a[m][n]);
    }
  }
 
 for(m = 0; m< i; m++)
  {
   for(n= 0;n < j; n++)
    {
      b[n][m] = a[m][n];
    }
  }

 printf(" Transpose Matrix Elemnts are: \n");
 for(m = 0; m < j; m++)
  {
   for(n = 0; n < i; n++)
    {
      printf("%d \n", b[m][n]);
    }
    
  }
 
return 0;
}
