#include<stdio.h>
int main(){
    int num,a,b,c,sum=0;
    printf("print fibonacci sequence till number less than:");
    scanf("%d",&num);
    printf("Fibonacci sequence : \n");
    a=0;
    b=1;
    printf("%d,%d",a,b);
    while(a+b<num){
        c=a+b;
        a=b;
        b=c;
        printf(",%d",c);

    }


}