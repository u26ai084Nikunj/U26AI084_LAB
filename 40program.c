#include <stdio.h>
int main(){
    int n,sum;

    sum=0;
    while(1){
        printf("enter your number: \n");
        scanf("%d",&n);
        sum=sum+n;
        if (n<0){
            break;
        }
        
    }
    printf("The sum is %d",sum);
    return 0;
}