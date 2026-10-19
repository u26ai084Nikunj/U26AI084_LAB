#include<stdio.h>
int main(){
    int min_index,arr[10],n,temp;

    printf("enter number of elements in the array:");
    scanf("%d",&n);

    printf("Enter array elements: \n");
    for(int m=0;m<n;m++){
        scanf("%d",&arr[m]);
    }
    printf ("unsorted array \n");
    for(int l=0;l<n;l++){
        printf("%d\t",arr[l]);
    }
    
    for(int i=0;i<=n-2;i++){
    
    min_index=i;

    for(int j=i+1;j<=n-1;j++){
        if (arr[min_index]>arr[j]) {
            min_index=j;
        }}

    temp=arr[i];
    arr[i]=arr[min_index];
    arr[min_index]=temp;
    

}
printf("\nsorted array\n");

for(int k=0;k<n;k++){
    printf("%d \t",arr[k]);
}
}