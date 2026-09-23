//time in seconds---time
#include <stdio.h>
int main() {
    int seconds;
    printf("enter times in seconds less than 3600s \n");
    scanf("%d",&seconds);

    int hour;
    int minutes ;
    int se;


    minutes=seconds/60;
    hour=minutes/60;
    se=seconds%60;

    
    printf("the time in hours %d \n",hour);
    printf("the time in minutes %d \n",minutes);
    printf("the time in seconds is %d \n",se);

    return 0;
}
