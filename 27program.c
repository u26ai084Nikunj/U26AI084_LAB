#include <stdio.h>
#include <math.h>
int main() {
    int num,factor;
    factor=0;
    printf("enter number :");
    scanf("%d",&num);
    for (int i=1;i<=num;i++) {
        if(num%i==0){
            factor=factor+1;
        }
        if(factor>2){
            printf("%d is not a prime number \n",num);
            break;
        }
    }
    
    if(factor==2){
        printf("%d is a prime number ",num);
    }
    return 0;
}
