#include<stdio.h>
int main() {
    int sales,commission;
    printf("enter sales: \n");
    scanf("%d",&sales);
    if (sales<=500){
        commission=0.05*sales;
        printf("commission is %d : \n",commission );
    }
     if (sales<=500){
        commission=0.05*sales;
        printf("commission is %d : \n",commission );
    }
     if (sales>500 && sales<=2000){
        commission=35+0.10*(sales-500);
        printf("commission is %d : \n",commission );
    }
     if (sales>2000 && sales<=5000){
        commission=185+0.12*(sales-2000);
        printf("commission is %d : \n",commission );
    }
    if (sales>5000){
        commission=0.125*sales;
        printf("commission is %d: \n",commission);
    }
    return 0;
}