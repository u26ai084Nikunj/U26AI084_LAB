#include<stdio.h>
int main() {
    int n;
    printf("enter N:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if (i<n){
        printf("%d,",i*i);
        }
        if(i==n){
            printf("%d",i*i);
        }
    }
    return 0;
}
