#include<stdio.h>

int main(){
    
    int a, a1, a2;
    
    printf("Enter the first subject marks: ");
    scanf("%d", &a);
    
    if(a < 0 || a > 100){
        printf("Invalid marks for subject 1!\n");
        return 0;
    }

    printf("Enter the second subject marks: ");
    scanf("%d", &a1);
    
    if(a1 < 0 || a1 > 100){
        printf("Invalid marks for subject 2!\n");
        return 0;
    }

    printf("Enter the third subject marks: ");
    scanf("%d", &a2);
    
    if(a2 < 0 || a2 > 100){
        printf("Invalid marks for subject 3!\n");
        return 0;
    }

    float average = (a + a1 + a2) / 3.0;
    printf("Average = %.2f\n", average);

    return 0;
}
