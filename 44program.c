#include <stdio.h>
int main() 
{
    int consume,amount;
    printf("ENTER CONSUMPTION IN UNIT: ");
    scanf("%d",&consume);

    if(consume>=0 && consume<=200)
    {
        amount=0.50*consume;
        printf("Amount to be paid: %d \n",amount);
    }
    if(consume>200 && consume<=400)
    {
        amount=100+0.65*(consume-200);
        printf("Amount to be paid: %d \n",amount);
    }
    if(consume>400 && consume<=600)
    {
        amount=230+0.80*(consume-400);
        printf("Amount to be paid: %d \n",amount);
    }
    if(consume>600)
    {
        amount=425+125*(consume-600);
        printf("Amount to be paid: %d \n",amount);
    }
    return 0;
}