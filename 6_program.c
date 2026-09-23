#include <stdio.h>
int main() {
    int a,b;
    printf("enter a,b: \n");
    scanf("%d %d",&a,&b);
    printf("values before swap:\n a=%d \n b=%d \n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("values after swap:\n  a=%d \n b=%d \n",a,b);
    return 0;
}
