#include<stdio.h>
int main() {
    int num,d,sum=0;
    printf("enter number:");
    scanf("%d",&num);
    while(num!=0){
        d=num%10;
        sum=sum+d;
        num=num/10;
    }
    while(sum>9){
        num=sum;
        sum=0;
        while(num!=0){
        d=num%10;
        sum=sum+d;
        num=num/10;
        
    }}
printf("single digit sum of digits is %d",sum);
}

