#include <stdio.h>
int main() {
    float b;
    printf("enter base:");
    scanf("%f",&b);

    float h;
    printf("enter height:");
    scanf("%f",&h);

    float  area;
    area=0.5* b *h;
    
    printf("the area of triangle is  % f \n",area);
    
    return 0;

}