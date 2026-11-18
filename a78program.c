#include<stdio.h>
int main(){
    char name[20],ch;
    int i=0,location,t=0;
    printf("enter string:\n");
    fgets(name,sizeof(name),stdin);
    printf("enter character to find\n");
    scanf(" %c",&ch);
    while(name[i]!='\0'&&name[i]!='\n'){
        if(ch==name[i]){
            location=i+1;
            t=1;
            break;
        }
        i++;
    }
    if(t==0){
        printf("character not present in string");
    }
    else if (t==1){
        printf("character is present at %d position at %d index",location,location-1);
    }

}