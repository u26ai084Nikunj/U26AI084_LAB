#include <stdio.h>
int main() {
    float c;
    float f;
    printf("enter temperature in farenhiet \n :");
    scanf("%f",&f);
    c= (f-32.0) * 5.0/9.0;
    printf("the temperature in celsius scale is : %f \n",f);
    return 0;
}
