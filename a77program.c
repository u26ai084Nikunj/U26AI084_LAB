#include<stdio.h>
#include<string.h>
int main(){
    char ch[20],str[20],cpy[20],con[45],rev[20];
    fgets(ch,sizeof(ch),stdin);
    fgets(str,sizeof(str),stdin);
    ch[strcspn(ch,"\n")]='\0';
    str[strcspn(str,"\n")]='\0';
    printf("The string 1 is :\n");
    fputs(ch,stdout);
    printf("The string 2 is :\n");
    fputs(str,stdout);
    printf("The length of the string 1 is %d\n",strlen(ch));
    printf("The length of string 2 is %d\n",strlen(str));
    printf("copying string 1 to string 3");
    strcpy(cpy,ch);
    printf("string 3:\n%s",cpy);
    printf("concatenating string 1 and string 2:\n");
    strcpy(con,cpy);
    strcat(con,str);
    printf("the concatenated  string:\n%s",con);
    printf("comparing string 1 and string 2");
    int c=strcmp(ch,str);
    if(c==0){
        printf("equal");
    }
    else{
        printf("not equal");
    }
    printf("\nreversing string 1\n");
    strcpy(rev,ch);
    strrev(rev);
    printf("The reversed string is \n%s",rev);
}