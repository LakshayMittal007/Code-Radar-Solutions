#include<stdio.h>
int main(){
    char str[50];
    scanf("%[^\n]s",str);
    int i=0,j=0,k=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            str[i]='\0';
        }
    }
    for(i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }


}