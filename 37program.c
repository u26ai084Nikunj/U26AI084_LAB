#include <stdio.h>
int main() {
    int n;
    printf("enter N:");
    scanf("%d",&n);
    int i=2;
    while(i<=n) {
        printf("%d \t",i);
        i+=2;
    }
    return 0;
}