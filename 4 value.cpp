#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    printf("Enter the value of d: ");
    scanf("%d", &d);

    if (a >= b) {
        if (a >= c) {
            if (a >= d) {
                printf("A is Max");
            } else {
                printf("D is Max");
            }
        } else {
            if (c >= d) {
                printf("C is Max");
            } else {
                printf("D is Max");
            }
        }
    } else {
        if (b >= c) {
            if (b >= d) {
            	//B bada aye tab
                printf("B is Max");
            } else {
                printf("D is Max");
            }
        } else {
            if (c >= d) {
                printf("C is Max");
            } else {
                printf("D is Max");
            }
        }
    }

    return 0;
}
