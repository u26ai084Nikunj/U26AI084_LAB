#include <stdio.h>
int palindrome(int);
int main(){
    int n,result;
    printf("enter number:");
    scanf("%d",&n);
    result=palindrome(n);
    if(result==0){
        printf("%d is not a palindrome number.",n);
    }
    else if(result==1){
        printf("%d is a palindrome number.",n);
    }
}
int palindrome(int a){
    int q,sum=0,t;
    t=a;
    while(a!=0){
        q=a%10;
        sum=sum*10+q;
        a=a/10;
    }
    if (t==sum){
        return 1;
    }
    else{
        return 0;
    }
}