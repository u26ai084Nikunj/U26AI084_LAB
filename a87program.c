#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("how many names:");
    scanf("%d",&n);
    getchar();
    char names[n][20],tamp[20];
    for(int i=0;i<n;i++){
        printf("enter name %d",i+1);
        fgets(names[i],sizeof(names[i]),stdin);
        names[i][strcspn(names[i],"\n")]='\0';
    }
    printf("entered values\n");
    for(int i=0;i<n;i++){
        printf("\nname %d:\n",i+1);
        fputs(names[i],stdout);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(names[j],names[j+1])>0){
                strcpy(tamp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],tamp);
            }
        }
    }
    printf("sorted values\n");
    for(int i=0;i<n;i++){
        printf("\nname %d:\n",i+1);
        printf("%s",names[i]);
    }


}