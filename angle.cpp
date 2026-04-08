#include <stdio.h>

int main() {
    
    float first_angle, second_angle, result;

    printf("Enter the first angle: ");
    scanf("%f", &first_angle);

    printf("Enter the second angle: ");
    scanf("%f", &second_angle);
    
    result = 180 - (first_angle + second_angle);    
    
    printf("The third angle is %f\n", result);
    
   
}
