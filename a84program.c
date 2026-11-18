#include<stdio.h>
int main(){
    char str[10];
    int i=0,j=0,t=0;
    printf("please enter the string:");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\n'&& str[i]!='\0'){
        i++;
    }
    str[i]='\0';
    i--;
    while(i>j){
        if (str[i]!=str[j]){
        t=1;
        break;   
    }
    i--;
    j++;
}
if(t==1){  
    printf("string is not a palindrome.");
}
else if (t==0){
    printf("string is a palindrome.");
}

}