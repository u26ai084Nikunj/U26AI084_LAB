//31558150---day hours minutes
#include<stdio.h>
int main() {
    printf("THE PERIOD OF REVOLUTION OF EART IS 31558150 seconds \n");
    float day;
    float hours;
    float minutes;
    
    minutes=31558150/60;
    hours=minutes/60;
    day=hours/24; 
    
    

    printf("The total days are: %f \n",day);
    printf("The total hours are : %f \n",hours);
    printf("the total minutes are : %f \n",minutes);

    return 0;
    
    



}