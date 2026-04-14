#include <stdio.h>

int main() {
    
    char grade;
    int a;
    
    printf("Enter the Marks: ");
    scanf("%d", &a);
    
  
    
    
    grade = (a >= 91) ? 'A' :
               (a >= 80) ? 'B' :
                 (a >= 70) ? 'C' :
                     (a >= 50) ? 'D' : 'F';
                    
    printf("The Grade is %c\n", grade);            
        
    //switch
    switch(grade){
        
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Well done\n");
            break;
        case 'C':
            printf("Good job\n");
            break;
        case 'D':
            printf("OK\n");
            break;
        case 'F':
            printf("oh stree kal aana\n");
            break;
        default:
            printf("invalid grade");
            break;
            
            if(grade == 'A'  ||  grade == 'B' ||  grade == 'C'  ||  grade == 'D'){
            	
            	printf("You are eligible fpr nexxt level");
            	
            	
			}else {
			
				printf("You are not eligible");
			
		}
      }           
                
}

