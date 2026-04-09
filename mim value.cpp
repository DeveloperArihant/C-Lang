#include<stdio.h>

int main(){
    
    int a;
    int a1;
    
    printf("Enter the first value: ");
    scanf("%d", &a);
    
    printf("Enter the second value: ");
    scanf("%d", &a1);
    
    // Check minimum value
    
    if(a < a1){
        printf("Minimum value is: %d\n", a);
    }
    else{
        printf("Minimum value is: %d\n", a1);
    }
    
    return 0;
}
