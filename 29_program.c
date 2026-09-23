#include <stdio.h>
int main() {
    int num1,t,num,sum=0;
    printf("enter a number:");
    scanf("%d",&num1);
    num=num1;
    while(num1>0){
        t=num1%10;
        sum=sum*10+t;
        num1=num1/10;
    }  
    if (sum==num) {
        printf("%d is a palindrome",num);
    }  
    else{
        printf("%d is not a palindrome",num);
    }
    return 0;
}