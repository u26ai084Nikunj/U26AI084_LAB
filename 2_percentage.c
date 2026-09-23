#include <stdio.h>
int main() {
    float first_subject;
    float second_subject;
    float third_subject;
    float fourth_subject;
    float fifth_subject;
    float total;
    float percentage;
    printf("enter marks  \n");

    printf("first subject: \n");
    scanf("%f",&first_subject);
    
    printf("second subject: \n");
    scanf("%f",&second_subject);

    printf("third subject: \n");
    scanf("%f",&third_subject);
    
    printf("fourth subject: \n");
    scanf("%f",&fourth_subject);
    
    printf("fifth subject: \n");
    scanf("%f",&fifth_subject);
    
    total=first_subject+second_subject+third_subject+fourth_subject+fifth_subject;

    percentage=(total/500)*100;

    printf("the total marks are: %f \n",total);

    printf("the percentage is: %f \n ",percentage);

    return 0;




}
