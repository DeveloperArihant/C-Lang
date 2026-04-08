#include<stdio.h>

int main(){

    float salary;
    float HRA,DA,TA;
   

    printf("Enter Salary: ");
    scanf("%f", &salary);

  
    printf("Enter HRA percentage: ");
    scanf("%f", &HRA);
    hra = (HRA / 100) * salary;
    printf("HRA = %f\n", hra);

    
    printf("Enter DA percentage: ");
    scanf("%f", &DA);
    da = (DA / 100) * salary;
    printf("DA = %f\n", da);

    printf("Enter TA percentage: ");
    scanf("%f", &TA);
    ta = (TA / 100) * salary;
    printf("TA = %f\n", ta);

    
    gross = salary + hra + da + ta;
    printf("Gross Salary = %f\n", gross);

    return 0;
}
