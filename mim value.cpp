#include <stdio.h>

int main() {

    int a, b, c;

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter second value: ");
    scanf("%d", &b);

    printf("Enter third value: ");
    scanf("%d", &c);

    (a < b)
        ? ((a < c)
		 ? printf("Smallest number is: %d", a)
          : printf("Smallest number is: %d", c))
        : ((b < c)
		 ? printf("Smallest number is: %d", b)
         : printf("Smallest number is: %d", c));

    return 0;
}
