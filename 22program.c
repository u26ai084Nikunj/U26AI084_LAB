#include <stdio.h>
int main() {
    int n;
    printf("enter N:");
    scanf("%d",&n);
    int factorial=1;
    for (int i=n;i>=1;i--){
        factorial=factorial*i;
    }
    printf("factorial of %d is %d",n,factorial);
    return 0;
}