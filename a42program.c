#include<stdio.h>
int main() {
    int n;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            printf(" ");

        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        if(i==n){
            printf("\n");
            for(int l=n-1;l>=1;l--){
                for(int m=n+1-l;m>=1;m--){
                    printf(" ");
                }
                for(int o=2*l-1;o>=1;o--){
                    printf("*");
                }
                printf("\n"); 

            }
        }

        printf("\n");

    }


}
