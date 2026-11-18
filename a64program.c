#include<stdio.h>
void fibonacci(int);
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    fibonacci(n);
 }
    void fibonacci(int n){
        int a,b,c;
        a=0;
        b=1;
        c=a+b;
        printf("%d\t%d\t",a,b);
        for(int i=1;i<=n-2;i++){
            printf("%d\t",c);
            a=b;
            b=c;
            c=a+b;
        }


    }
