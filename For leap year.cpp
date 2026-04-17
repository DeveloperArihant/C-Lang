#include<stdio.h>

int main() {
    
    int a, b;
    
    printf("Enter starting year: ");
    scanf("%d", &a);
    
    printf("Enter ending year: ");
    scanf("%d", &b);
    
    for(; a <= b; a++) {
        
        if (a % 4 == 0 ) {
            printf("%d ", a);
        }
    }
    
    return 0;
}

