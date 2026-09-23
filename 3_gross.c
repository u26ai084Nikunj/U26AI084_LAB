#include <stdio.h>
int main() {
    float allowance;
    float basic;
    float deductions;
    float tax;
    float gross;

    printf("ENTER DETAILS \n");

    printf("ENTER BASIC SALARY: \n");
    scanf("%f",&basic);
    
    printf("ENTER TOTAL ALLOWANCES: \n");
    scanf("%f",&allowance);

    printf("ENTER TOTAL DEDUCTION EXCEPT INCOME TAX \n");
    scanf("%f",&deductions);

    printf("ENTER INCOME TAX: \n");
    scanf("%f",&tax);

    gross=allowance+basic-tax-deductions;    
    printf("THE GROSS SALARY IS : %f \n",gross);
    
    return 0;
}