#include <stdio.h>
int main() {
    float principal;
    printf("PRINCIPAL: \n");

    scanf("%f",&principal);
    float rate;

    printf("RATE \n");

    scanf("%f",&rate);

    int time ;
    printf("TIME  \n");
    scanf("%d",&time);

    float simple_interest;

    simple_interest=(principal*rate*time)/100;
    
    printf("THE SIMPLE INTEREST IS : %f \n",simple_interest);
    return 0;

}