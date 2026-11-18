#include<stdio.h>
void length( char []);
int main(){
    char txt[30];
    printf("enter line of text:");
    fgets(txt,sizeof(txt),stdin);
    length(txt);
}
void length(char a[]){
    int c=0,i=0;
    while(a[i]!='\0'){
        c++;
        i++;
    }
    printf("length of string is %d",c-1);

}