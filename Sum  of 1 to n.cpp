#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){                    // Enter the number 5 // Sum = 5+4+3+2+1=15 
         sum = sum + i;
    }

    printf("Sum of numbers from 1 to %d is : %d\n", n, sum);

    return 0;
}
