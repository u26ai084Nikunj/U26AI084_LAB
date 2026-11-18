#include<stdio.h>
int prime(int);
int main(){
    int n,t;
    printf("enter number :");
    scanf("%d",&n);
    t=prime(n);
    if(t==1){
        printf("%d is a prime number",n);
    }
    if(t==0){
        printf("%d is not a prime number",n);
    }

}
int prime(int a){
    int count=0;
    if (a<=0){
        return 0;

    }
    for(int i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}