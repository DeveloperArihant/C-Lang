#include <stdio.h>

int main() {
    int a,b;
    
    printf("Enter the Odd number");
    scanf("%d",&a);
    printf("Enter the Odd number");
    scanf("%d",&b);

    for(; a<=b; a++) {
    	if(a % 2 == 0){
    		printf("%d ",a);
		}
        
    }

    return 0;
}
