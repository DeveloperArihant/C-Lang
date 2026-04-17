#include <stdio.h>

int main() {
    int a;
    
    printf("Enter the Odd number");
    scanf("%d",&a);

    for(; a>=1; a-=2) {
    	if(a % 2 != 0){
    		printf("%d ",a);
		}
        
    }

    return 0;
}
