#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    int x;
    printf("enter value of x:");
    scanf("%d",&x);
    int y;
    if (n==1) { 
        printf("Y= %d \n",1+x);
    }
    if (n==2) {
        printf("Y=%d \n",1+x/n);
    }
    if (n==3) {
        printf("Y=%d \n",1+(int)pow(x,n));
    }
    if (n>3 || n<1) {
        printf("Y=%d \n",1+n*x);
    }
    return 0;
    
}