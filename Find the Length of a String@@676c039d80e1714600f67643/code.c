#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i=0,l=0;
    scanf("%[^\n]s",str);
    while(str[i]!='\0'){
        l++;
        i++;
    }
    printf("%d",l);
    return 0;
}