#include <stdio.h>
 
int main()
{
  int m, n, p, q, a, b, k, sum = 0, c[20][20], d[20][20], mul[20][20];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (a= 0; a< m; a++)
    for (b = 0; b < n; b++)
      scanf("%d", &c[a][b]);

  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (a = 0; a < p; a++)
      for (b = 0; b < q; b++)
        scanf("%d", &d[a][b]);
 
    for (a = 0; a < m; a++) {
      for (b = 0; b< q; b++) {
        for (k = 0; k < p; k++) {
          sum = sum + c[a][k]*d[k][b];
        }
 
        mul[a][b] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (a= 0; a< m; a++) {
      for (b = 0; b < q; b++)
        printf("%d\n", mul[a][b]);
 
     
    }
  }
 
  return 0;
}
