#include<stdio.h>
int main(){
    char str[20];
    int i=0;
    printf("enter string");
    fgets(str,sizeof(str),stdin);
    printf("original string:\n");
    fputs(str,stdout);

    while(str[i]!='\n'&&str[i]!='\0'){
        if(str[i]>='a'&&str[i]<='z'){
        str[i]=str[i]-32;
        
    }
    i++;
}
    printf("after upper case:\n%s",str);
    


}