#include <stdio.h>
#include <math.h>
int main() {
    int n;
    int f;
    printf("ENTER NUMBER:");
    scanf("%d",&n);
    if (n=1){
        printf("1 is not a prime number");
    }
    if (n=2){
        printf("2 is a prime number ");
    }
    if (n=3){
        printf("3 is a prime number ");
    }

    if (n>3){
    for (int i=1;i<=pow(n,1/2);i++){
        f=n%i;
        if (f==0){
            printf("%d is not a prime number!",n);
        }
    }}
    else {
        printf("not a prime number");
    }
    return 0;
}
