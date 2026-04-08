#include<stdio.h>

int main(){

    float salary;
    float hra_percent, da_percent, ta_percent;
    float hra, da, ta, gross;

    printf("Enter Salary: ");
    scanf("%f", &salary);

  
    printf("Enter HRA percentage: ");
    scanf("%f", &hra_percent);
    hra = (hra_percent / 100) * salary;
    printf("HRA = %f\n", hra);

    
    printf("Enter DA percentage: ");
    scanf("%f", &da_percent);
    da = (da_percent / 100) * salary;
    printf("DA = %f\n", da);

    printf("Enter TA percentage: ");
    scanf("%f", &ta_percent);
    ta = (ta_percent / 100) * salary;
    printf("TA = %f\n", ta);

    
    gross = salary + hra + da + ta;
    printf("Gross Salary = %f\n", gross);

    return 0;
}
