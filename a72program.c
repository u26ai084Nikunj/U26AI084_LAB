#include <stdio.h>
int main(){
    char name[15];
    int len=0;
    int i=0;
    printf("enter name\n");
    fgets(name,sizeof(name),stdin);
    while(name[i]!='\0'){
        len++;
        i++;
    }
    printf("the length of string is %d",len-1);

}