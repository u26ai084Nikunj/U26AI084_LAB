#include<stdio.h>
int main(){
    int arr[10],n,t;
    printf("how many elements:\n");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("ARRAY:\n");
    for(int a=0;a<n;a++){
        printf("%d\t",arr[a]);
    }
    for(int j=0;j<n;j++){
    for(int k=0;k<n;k++){
        if (arr[k]>arr[k+1]){
            t=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=t;
            }
        }
    }
    printf("\nSORTED ARRAY:\n");
    for(int m=0;m<n;m++){
        printf("%d\t",arr[m]);
    }
}