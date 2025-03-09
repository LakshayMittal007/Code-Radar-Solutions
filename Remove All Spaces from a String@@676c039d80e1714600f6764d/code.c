#include<stdio.h>
int main(){
    char str[50];
    scanf("%[^\n]s",str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]!=' '){
            printf("%c",str[i]);
        }
        i++;
    }
    return 0;
}