#include<stdio.h>
int main(){
    char name[20];
    int i=0,c;
    printf("enter name:");
    fgets(name,sizeof(name),stdin);
    printf("name:");
    fputs(name,stdout);
    printf("ASCII codes");
    while(name[i]!='\0'&& name[i]!='\n'){
        c=name[i];
        printf("%d\t",c);
        i++;
    }
}