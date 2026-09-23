# include <stdio.h>
int main(){
    int base;
    printf("enter base:");
    scanf("%d",&base);
    int power;
    printf("enter power:");
    scanf("%d",&power);
    int ans=1;
    for (int i=1;i<=power;i++){
        ans=ans*base; 
    }
    printf("THE ANSWER IS %d",ans);
    return 0;
}
