#include<stdio.h>
int main() {
    int arr[10];
    int sum=0;
    printf("enter array elements:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("The sum of numbers is %d",sum);

}
