#include<stdio.h>
int main(){
    int i=0,j=0;
    char str1[15],str2[15],con[35];
    printf("enter string 1:\n");
    fgets(str1,sizeof(str1),stdin);
    printf("enter string 2:\n");
    fgets(str2,sizeof(str2),stdin);
    printf("The first string:\n");
    fputs(str1,stdout);
    printf("The second string");
    fputs(str2,stdout);
    while(str1[i]!='\n'){
        con[i]=str1[i];
        i++;
    }
    while(str2[j]!='\n'){
        con[i]=str2[j];
        i++;
        j++;
    }
    con[i]='\0';
    printf("The concatenated  string:\n%s",con);
}