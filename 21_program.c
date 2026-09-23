#include <stdio.h>
int main() {
    char oper;
    printf("tell operation to perform :");
    scanf("%c",&oper);
    int  a;
    printf("enter first number :");
    scanf("%d",&a);
    int  b;
    printf("enter the second number :");
    scanf("%d",&b);
    
    switch (oper) {
        case '+' : printf("%d",a+b);
        break;
        case '-' : printf("%d",a-b );
        break;
        case '*' :printf("%d",a*b);
        break;
        case '/' :printf("%d",a/b);
        break;
        default :printf("only + - * / options are available");
}
}



