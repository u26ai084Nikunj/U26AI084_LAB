#include<stdio.h>
int main(){
    int arr1[10],arr2[10],temp;
    printf("enter array 1 values:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter array 2 values:\n");
    for(int j=0;j<10;j++){
        scanf("%d",&arr2[j]);
    }
    printf("Array 1 before  swapping :\n");
    for(int a=0;a<10;a++){
        printf("%d\t",arr1[a]);
    }
    printf("\n");

    printf("Array 2 before swapping :\n");
    for(int b=0;b<10;b++){
        printf("%d\t",arr2[b]);
    }
    for(int k=0;k<10;k++){
        temp=arr1[k];
        arr1[k]=arr2[k];
        arr2[k]=temp;
    }
    printf("\n");
    printf("Array 1 after swapping :\n");
    for(int l=0;l<10;l++){
        printf("%d\t",arr1[l]);
    }
    printf("\n");
    printf("Array 2 after swapping :\n");
    for(int m=0;m<10;m++){
        printf("%d\t",arr2[m]);
    }

}