#include <stdio.h>
int main() {
    int sum,num,div,t;
    printf("enter a number :");
    scanf("%d",&num);
    t=num;
    sum=0;
    while(num!=0) {
        div=num%10;
        sum=sum*10+div;
        num=num/10;
    }
    printf("The reverse of %d is %d",t,sum);
}
