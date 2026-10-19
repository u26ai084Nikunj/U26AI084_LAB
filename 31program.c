#include <stdio.h>
int main() {
    int sum,num,k,w;
    sum=0;
    printf("Enter Number :");
    scanf("%d",&num);
    k=num;
    while(num!=0){
        w=num%10;
        sum=sum+w;
        num=num/10;
    }
    printf("The sum of digits of %d is %d",k,sum);
}