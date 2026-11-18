#include<stdio.h>
int armstrong(int);
int power(int,int);
int main(){
    int n,t;
    printf("enter number:");
    scanf("%d",&n);
    t=armstrong(n);
    if(t==1){
        printf("%d is an armstrong number.",n);
    }
    if(t==0){
        printf("%d is not an armstrong number.",n);
    }
}
int armstrong(int a){
    int q,sum=0,count=0,t,r;
    t=a;
    while(a!=0){
        a=a/10;
        count++;

    }
    a=t;
    while(a!=0){
        q=a%10;
        sum=sum+power(q,count);
        a=a/10;

    }
    if (sum==t){
        return 1;
    }
    else{
        return 0;
    }
    }
    int power(int a,int b){
        if (b==0){
            return 1;
        }
        else{
            return a*power(a,b-1);
        }
    }
