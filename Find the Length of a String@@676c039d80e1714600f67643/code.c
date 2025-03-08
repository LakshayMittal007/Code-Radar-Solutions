#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets("%s",str);
    printf("%d",strlen(str));
    return 0;
}