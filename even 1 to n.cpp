#include<stdio.h> 
main(){ 
    int a=0,b; 
    printf("Enter the value "); 
    scanf("%d",&b); // Input (e.g., 2)
          // Check if input is >= 2
        do{ 
            printf("%d",a); // Print current a
            a+=2;           // Increment a by 2
        }while(a<=b);       // Loop while a is less or equal to 2
    
}

