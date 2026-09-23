#include <stdio.h>
int main() {
    int hours;
    int minutes;
    int seconds;
    int time;
    printf("Enter current Time: \n");

    printf("enter Hours: \n");
    scanf("%d",&hours);

    printf("enter Minutes: \n");
    scanf("%d",&minutes);

    printf("enter Seconds: \n");
    scanf("%d",&seconds);

    time=hours*60*60+minutes*60+seconds;

    printf("The total number of seconds is : %d \n");
    
    return 0;



}