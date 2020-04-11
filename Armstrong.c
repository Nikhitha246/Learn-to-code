#include <stdio.h>
int main() {
    int num, a, b, c= 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    a= num;

    while (a!= 0) {
        
        b = a % 10;
        
        c += b * b * b;
        
        
        a /= 10;
    }

    if (c == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
