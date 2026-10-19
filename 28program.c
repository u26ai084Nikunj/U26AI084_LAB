#include <stdio.h>
int main() {
    int num,x,initial,sum=0;
    printf("enter the number : \n");
    scanf("%d",&num);
    initial=num;
    while(num>0){
        x=num%10;
        sum=sum+x*x*x;
        num=num/10;
    }
    if (initial==sum) {
        printf("%d is an armstrong number!\n",initial);
    }
    else{
        printf("%d is not an armstrong number! \n",initial);
    }
    return 0;
    
}