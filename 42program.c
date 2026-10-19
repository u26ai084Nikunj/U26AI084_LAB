#include <stdio.h>
int main() {
    int n,factor;
    factor=0;
    printf("enter number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            factor=factor+1;
        }
    }
    if (factor==2) {
        
        printf("%d is a prime number ",n);
    }
    if (factor>2) {
        printf("%d is a composite number",n);
       
    }
    if (factor<2) {
      
        printf(" %d is neither prime nor composite ",n);
    }
    return 0;
}

