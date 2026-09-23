#include <stdio.h>
int main() {
    int sum1=0,sum2=0;
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1,j=2;i<=n,j<=n;i+=2,j+=2){
        sum1=sum1+i;
        sum2=sum2+1;
    }
    printf("The sum of even numbers from 1 to n is %d \n",sum1);
    printf("The sum of odd numbers from 1 to n is %d \n",sum2);
    return 0;
}