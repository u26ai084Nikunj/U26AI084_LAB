#include<stdio.h>
int main() {
    int arr1[10],arr2[10],add[10];
    for (int i=0;i<10;i++){
        printf("enter number  for arr1:");
        scanf("%d",&arr1[i]);
    }
    for (int j=0;j<10;j++){
        printf("enter number for arr2:");
        scanf("%d",&arr2[j]);
    }
    for (int k=0;k<10;k++){
        add[k]=arr1[k]+arr2[k];

    }
    printf("Array1 \n");
    for (int i=0;i<10;i++){
       printf("%d \t",arr1[i]);
    }
    printf("\n");
    printf("Array2 \n");
    for (int j=0;j<10;j++){
        printf("%d \t",arr2[j]);
    }
    printf("\n");
    printf("sum \n");
    for(int k=0;k<10;k++){
        printf("%d \t",add[k]);
    }

}