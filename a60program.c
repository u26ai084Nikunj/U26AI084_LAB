#include<stdio.h>
int evodd(int n);
int main(){
    int n,t;
    printf("enter number:");
    scanf("%d",&n);
    t=evodd(n);
    if(t==0){
        printf("%d is a odd number",n);
    }
    else if(t==1){
        printf("%d is an even number",n);
    }
}
int evodd(int a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}