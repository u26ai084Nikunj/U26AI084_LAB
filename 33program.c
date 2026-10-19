#include<stdio.h>
int main() {
    int n,k,max,min;
    printf("total numbers:");
    scanf("%d",&n);
    printf("enter number: \n");
    scanf("%d",&k);
    max=k;
    min=k;
    for(int i=1;i<=n-1;i++){
    printf("enter number: \n");
    scanf("%d",&k);
    if (max<k) {
            max=k;
        }
    if (min>k) {
            min=k;
        }
        
    }
    printf("%d  is maximum number \n",max);
    printf("%d is minimum number ",min);
    return 0;
    
}