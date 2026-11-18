#include<stdio.h>
int max(int array[],int);
int main(){
    int n,ans;
    printf("enter n: ");
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        printf("array[%d]:",i);
        scanf("%d",&array[i]);
    }
    ans=max(array,n);
    printf("maximum value in array is %d",ans);
}
int max(int array[],int n){
    int max=array[0];
    for (int i=0;i<n;i++){
        if (array[i]>max){
            max=array[i];
        }
    }
    return max; 
}