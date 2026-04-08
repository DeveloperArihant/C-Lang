#include<stdio.h>

int main(){
    
    float celsius , fahrenheit , result;
    
    printf("Enter the temprature in celsius :");
    scanf("%f", &celsius,&fahrenheit,&result);
    
    result = (1.8 * celsius) + 32;
    
    printf("the temprature in fahrenheit is %f", result);
    
}
