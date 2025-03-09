#include<stdio.h>
int main(){
    char str[50];
    scanf("%[^\n]s",str);
    int i=0,j=0,k=0;
    while(str[i]!='\0'){
        if(str[i]!=' '){
            printf("%c",str[i]);
        }
    }
    return 0;
    
}