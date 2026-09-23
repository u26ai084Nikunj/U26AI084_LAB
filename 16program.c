#include <stdio.h>
int main() {
    printf("please enter distinct numbers! \n");
    int a;
    int b;
    int c;
    printf("enter first number: \n");
    scanf("%d",&a);
    printf("enter second number: \n");
    scanf("%d",&b);
    printf("enter third number: \n");
    scanf("%d",&c);
    if (a>b && a>c) {
        printf(" %d is maximum \n",a);
    }
    else if (b>c && b>a) {
        printf(" %d is maximum \n",b);
    }
    else {
        printf(" %d is maximum",c);
    }
    return 0;
}