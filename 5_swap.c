#include <stdio.h>
int main() {
    int a;
    printf("enter a:");
    scanf("%d",&a);
    int b;
    printf("enter b:");
    scanf("%d",&b);
    printf("the values before: \n" );
    printf("%d \n",a);
    printf("%d \n",b);
    int c;
    c=a*b;
    a=c/a;
    b=c/b;
    printf("the values after: %d \n",a,b);
    printf("%d \n",a);
    printf("%d \n",b);
}