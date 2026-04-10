#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    if (a >= b) {
        if (a >= c) {
            printf("A is max");
        } else {
            printf("C is max");
        }
    } else {
        if (b >= c) {
            printf("B is max");
        } else {
            printf("C is max");
        }
    }

    return 0;
}
