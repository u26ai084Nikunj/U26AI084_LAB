#include<stdio.h>
int main(){
    int n,r,sum=0,sum1=0,t;
    printf("enter number:");
    scanf("%d",&n);
    t=n;
    while(n!=0){
        r=n%10;
        sum=sum+r*r*r;
        sum1=sum1*10+r;
        n=n/10;
    }
    if (t==sum){
        printf("it is an armstrong number");
    }
    else{
        printf("not an armstrong number:\n");
    }
    printf("reverse of the number is %d",sum1);

}
