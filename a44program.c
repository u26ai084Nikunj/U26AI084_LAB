#include <stdio.h>
int main(){
    int arr[10];
    int count_odd,count_even;
    count_odd=count_even=0;
    printf("enter array elements :");
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if (arr[i]%2==0){
            count_even=count_even+1;
        }
        else{
            count_odd=count_odd+1;
        }
    }
    printf("THE TOTAL NUMBER OF ODD NUMBERS IN THE ARRAY IS %d ",count_odd);
    printf("THE TOTAL NUMBER OF EVEN NUMBERS IN THE ARRAY IS %d ",count_even);
}

