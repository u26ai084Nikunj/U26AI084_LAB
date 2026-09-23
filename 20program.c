#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    printf(" enter a ;");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter code :");
    scanf("%d",&c);
    switch(c) {
        case 1: printf("addition %d",a+b);
        break;
        case 2: printf("subtraction %d",a-b);
        break;
        case 3: printf("multiplication %d",a*b);
        break;
        case 4: printf("division %d",a/b);
        break;
        default:printf("invalid code");
    
    }
    return 0;
    


}