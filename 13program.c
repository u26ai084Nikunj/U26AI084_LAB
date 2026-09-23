#include <stdio.h>
int main() {
    int m;
    printf("enter the number: \n" );
    scanf("%d",&m);

    if (m%2==0) {
        printf("the number is even ");
     }
     else {
        printf("the number is odd");
     }
     return 0;
}