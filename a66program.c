#include <stdio.h>
int factorial(int);
int combination(int,int);
int main(){
    int n,r,t,ans;
    printf("AVOID LARGE FACTORIALS:\n");
    printf("enter n :");
    scanf("%d",&n);
    printf("enter r :");
    scanf("%d",&r);
    if (n<r||n<0||r<0){
        printf("not valid");
    }
    else{
    t=combination(n,r);
    printf("ncr is equal to %d",t);
    }
}
int combination(int n, int r){
    int a,b,c;
    a=factorial(n);
    b=factorial(n-r);
    c=factorial(r);
    return a/(b*c);
}
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}