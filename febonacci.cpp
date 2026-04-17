#include <stdio.h>

int main() {
    int a = 0, b = 1, c;
    int count, i = 1;

    printf("Enter how many terms: ");
    scanf("%d", &count);


    do {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    } while (i <= count);
    
     printf("This is your  Fibonacci Series\n");

   
}
